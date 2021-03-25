#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int count=0;
    char c;
    string s;

    cin >> c;
    cin >> s;

    // 処理定義
    for(int i=0; i<s.size(); i++){
        if(c==s[i]) count++;
    }

    // 出力定義
    cout << count << endl;

    return 0;
}