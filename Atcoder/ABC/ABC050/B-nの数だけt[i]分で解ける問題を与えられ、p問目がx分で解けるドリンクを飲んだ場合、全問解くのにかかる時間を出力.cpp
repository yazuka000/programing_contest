/* sample input
3
2 1 4
2
1 1
2 3

5
7 2 3 8 5
3
4 2
1 7
4 13
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, m, p, x;
    cin >> n;

    vector<int> t(n), df(n);
    rep(i, n){
        cin >> t[i];
        df[i]=t[i];
    }

    cin >> m;
    rep(i, m){
        cin >> p >> x;       
        p--;
        t[p]=x;

        // accumulateを使うことで、配列内の値の合計を求められる
        int sum = accumulate(t.begin(), t.end(), 0);
        cout << sum << endl;

        t[p]=df[p];
    }
}

/* 参考回答

*/