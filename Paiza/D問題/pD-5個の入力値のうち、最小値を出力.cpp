/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n[5], minn=100000;

    // 入力
    rep(i, 5){
        cin >> n[i];
        minn=min(minn, n[i]);
    }

    // 処理

    // 出力
    cout << minn << endl;
}

/* 参考回答

*/