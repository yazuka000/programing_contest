/* sample input
2 4

10 100

3 2


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b, cnt = 0;

    // 入力
    cin >> a >> b;

    // 処理
    for(int i=a; i<=b; i++){
        cnt++;
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答

*/