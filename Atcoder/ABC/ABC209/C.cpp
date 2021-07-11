/* sample input
2
1 3

4
3 3 4 4

2
1 1

10
999999917 999999914 999999923 999999985 999999907 999999965 999999914 999999908 999999951 999999979


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // 整数列の長さn つまり入力される値の数がn個
    ll n, MOD = 1000000007;

    cin >> n;

    vector<int> C(n);

    rep(i, n) cin >> C[i];

    // 処理

    // 出力
    // cout << a << endl;
}

/* 参考回答
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> C(N);
    for(int i = 0; i < N; i++) cin >> C[i];
    sort(C.begin(),C.end());
    long long ans = 1;
    for(int i = 0; i < N; i++) ans = ans * max(0, C[i] - i) % 1000000007;
    cout << ans << endl;
}


*/