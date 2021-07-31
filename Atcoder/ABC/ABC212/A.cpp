/* sample input
50 50

100 0

0 100

100 2


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
    if(a == 0) cout << "Silver" << endl;
    else if(b == 0) cout << "Gold" << endl;
    else cout << "Alloy" << endl;

}

/* 参考回答

*/