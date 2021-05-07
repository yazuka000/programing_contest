/* sample input
happy,newyear,enjoy

haiku,atcoder,tasks

abcde,fghihgf,edcba
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
    for(int i=0; i<s.size(); i++){
        if(s[i]==','){
            s[i]=' ';
        }
    }

    // 出力
    cout << s << endl;
}

/* 参考回答

*/