/* sample input
0601889

86910

01010
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s;

    // 入力
    cin >> s;

    // 処理
    reverse(s.begin(), s.end());

    for(int i=0; i<s.size(); i++){
        if(s[i]=='6') s[i]='9';
        else if(s[i]=='9') s[i]='6';
    }

    // 出力
    cout << s << endl;
}

/* 参考回答

*/