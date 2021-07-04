/* sample input
2 11

2 13

100 600

4 3
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

    // 入力
    cin >> a >> b;

    // 処理
    int aa = a * 6;

    // 出力
    if(aa >= b && a <= b) cout << "Yes" << endl;
    else cout << "No" << endl;

}

/* 参考回答

*/