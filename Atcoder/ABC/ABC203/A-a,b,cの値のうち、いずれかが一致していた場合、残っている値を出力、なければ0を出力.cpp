/* sample input
2 5 2

4 5 6

1 1 1
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b, c;

    // 入力
    cin >> a >> b >> c;

    // 処理
    if(a==b) cout << c << endl;
    else if(a==c) cout << b << endl;
    else if(c==b) cout << a << endl;
    else cout << 0 << endl;

}

/* 参考回答

*/