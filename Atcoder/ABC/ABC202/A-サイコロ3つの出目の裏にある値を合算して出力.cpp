/* sample input
1 4 3

5 6 4
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
    a=7-a;
    b=7-b;
    c=7-c;

    // 出力
    cout << a+b+c << endl;
}

/* 参考回答

*/