/* sample input
3

10
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, sum=0;
    cin >> n;

    // 入力
    for(int i=n; i>0; i--){
        sum+=i;
    }

    // 処理

    // 出力
    cout << sum << endl;
}

/* 参考回答

*/