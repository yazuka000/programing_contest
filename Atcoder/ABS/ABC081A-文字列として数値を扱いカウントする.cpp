/* sample input
101
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    string s;
    int sum=0;
    cin >> s;

    // 処理定義
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') sum++;
    }

    // 出力定義
    cout << sum << endl;
    
    return 0;
}