/* sample input
5 2 3 2

6 9 2 3


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // 水ボールがa個、追加の水ボールがb個、追加の赤ボールがc個、それで、水ボールが赤ボールの個数のd倍以下にする
    ll a, b, c, d;
    int i = 0;

    // 入力
    cin >> a >> b >> c >> d;

    ll cc = c * i;

    // 処理
    while(1){
        if(i == 100001){
            cout << -1 << endl;
            return 0;
        }

        if(a <= cc * d){
            cout << i << endl;
            return 0;
        }

        i++;
        a += b;
        cc = c * i;
    }
}

/* 参考回答

*/