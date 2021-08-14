/* sample input
214

1

126


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
    if(n >= 212) cout << 8 << endl;
    else if(n >= 126) cout << 6 << endl;
    else cout << 4 << endl;

}

/* 参考回答

*/