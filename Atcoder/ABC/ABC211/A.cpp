/* sample input
130 100

300 50

123 123


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b;
    float c;

    // 入力
    cin >> a >> b;

    // 処理
    c = (a-b) / 3.0 + b;

    // 出力
    cout << c << endl;
}

/* 参考回答

*/