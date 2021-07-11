/* sample input
2 3
1 3

4 10
3 3 4 4

8 30
3 1 4 1 5 9 2 6


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // n個の商品、所持金x円
    int n, x;

    // 入力
    cin >> n >> x;

    vector<int> A(n);

    // 処理
    rep(i, n){
        cin >> A[i];
        if(i % 2 != 0) A[i]--;
    }

    rep(i, n){
        x -= A[i];
    }

    // 出力
    if(x < 0) cout << "No" << endl;
    else cout << "Yes" << endl;

}

/* 参考回答

*/