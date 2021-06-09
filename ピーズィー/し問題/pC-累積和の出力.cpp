/* sample input
10
0 1 2 3 4 5 6 7 8 9
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, a, total=0;
    cin >> n;

    // 入力・処理・出力
    rep(i, n){
        cin >> a;
        total+=a;
        cout << total << endl;
    }
}

/* 参考回答

*/