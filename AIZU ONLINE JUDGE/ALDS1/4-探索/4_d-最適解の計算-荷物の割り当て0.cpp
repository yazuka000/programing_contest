/* sample input
5 3
8
1
7
3
9

4 2
1
2
2
6


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MAX 100000

int n, k;
ll T[MAX];

// 最大積載量Pの、k台のトラックで何個の荷物を詰めるか?
int check(ll P){
    int i = 0;

    for(int j=0; j<k; j++){
        ll s = 0;

        while(s+T[i] <= P){
            s += T[i];
            i++;
            if(i == n) return n;
        }
    }

    return i;
}

int solve(){
    ll left = 0;
    ll right = 100000 * 10000; // 荷物の個数 * 1個あたりの最大重量
    ll mid;

    while(right - left > 1){
        mid = (left + right) / 2;
        int v = check(mid); // mid == P を決めて何個積めるかチェック

        if(v >= n) right = mid;
        else left = mid;
    }

    return right;
}

int main(){
    cin >> n >> k;

    for(int i=0; i<n; i++) cin >> T[i];

    ll ans = solve();
    cout << ans << endl;

}

/* 参考回答

*/