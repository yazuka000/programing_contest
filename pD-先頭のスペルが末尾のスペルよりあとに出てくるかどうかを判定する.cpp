/* sample input
JAPAN
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    string str;
    cin >> str;

    // 処理定義  // 出力定義
    if(str[0] < str[str.size()-1]){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    
    return 0;
}

/* 参考回答
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] < s[s.length()-1]) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
*/