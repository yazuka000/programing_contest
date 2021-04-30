/* sample input
3 3
dxx
axx
cxx

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, l;
    cin >> n >> l;
    string ans;
    vector<string> str(n);

    // 入力
    rep(i, n){
        cin >> str[i];
    }

    // 処理
    sort(str.begin(), str.end());

    rep(i, n){
        ans+=str[i];
        // cout << ans << endl;
    }

    // 出力
    cout << ans << endl;
}

/* 参考回答

*/