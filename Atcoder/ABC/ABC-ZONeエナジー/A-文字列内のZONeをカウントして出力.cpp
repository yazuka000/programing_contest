/* sample input
abcdZONefghi

ZONeZONeZONe
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s, zn="ZONe";
    int cnt=0;
    cin >> s;

    // 入力

    // 処理
    for(int i=0; i<s.size(); i++){
        if(s.substr(i, i-i+4)==zn){
            cnt++;
        }
        // cout << s.substr(i, i-i+4) << endl;
    }

    // count(src.cbegin(), src.cend(), 'a')

    // 出力
    cout << cnt << endl;
}

/* 参考回答

*/