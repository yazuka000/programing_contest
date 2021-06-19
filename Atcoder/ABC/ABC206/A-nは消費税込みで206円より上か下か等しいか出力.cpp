/* sample input
180

200

191


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n;

    // 入力
    cin >> n;

    // 処理
    n = n * 1.08;

    // 出力
    if(n < 206) cout << "Yay!" << endl;
    else if(n == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;
}

/* 参考回答

*/