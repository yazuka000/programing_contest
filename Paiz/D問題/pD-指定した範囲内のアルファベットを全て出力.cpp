/* sample input
CZ
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    string str;
    cin >> str;

    // 処理定義
    for(char c=str[0]; c<=str[str.size()-1]; c++){
        // 出力定義
        cout << c << endl;
    }

    return 0;
}


/*
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char first = s[0];
    char last = s[s.length()-1];
    for (char c = first; c <= last; ++c) {
        cout << c << endl;
    }
}
*/