/* sample input
erasedream


*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    string s, t, str[4]={"dream", "dreamer", "erase", "eraser"};
    cin >> s;

    // 処理定義
    for(int i=0; t.size()<=s.size(); i++){
        if(s.substr(t.size(), t.size()+4) == str[0]){
            t+=str[0];
        } else if(s.substr(t.size(), t.size()+5) == str[1]){
            t+=str[1];
        } else if(s.substr(t.size(), t.size()+4) == str[2]){
            t+=str[2];
        } else if(s.substr(t.size(), t.size()+5) == str[3]){
            t+=str[3];
        }
    }

    // 出力定義
    if(s == t){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    // 端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4 個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                can2 = true;
                i += d.size(); // divide できたら i を進める
            }
        }
        if (!can2) { // divide できなかったら
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}
*/