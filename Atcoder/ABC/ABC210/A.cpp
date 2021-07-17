/* sample input
5 3 20 15

10 10 100 1


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // ほしいキャベツn個、a個までx円、それ以降はy円
    int n, a, x, y;

    ll total = 0;

    // 入力
    cin >> n >> a >> x >> y;

    // 処理
    for(int i=1; i<=n; i++){
        if(i <= a) total += x;
        else total += y;
    }

    // 出力
    cout << total << endl;
}

/* 参考回答

*/