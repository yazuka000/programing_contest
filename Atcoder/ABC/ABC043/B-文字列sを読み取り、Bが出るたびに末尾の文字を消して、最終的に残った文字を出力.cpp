/* sample input
01B0

0BB1
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s, ans;
    char ch;
    cin >> s;

    // 入力
    for(int i=0; i<s.size(); i++){
        
        if(s[i]=='B'){
            ans=ans.substr(0, ans.size()-1);
        }else{
            ans+=s[i];
        }
        // cout << ans << endl;
    }

    // 処理

    // 出力
    cout << ans << endl;
}

/* 参考回答

*/