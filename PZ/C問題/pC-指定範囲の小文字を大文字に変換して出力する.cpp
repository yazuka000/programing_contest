/* sample input
2 6
this is a pen
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b;
    string t, str;
    cin >> a >> b;
    getline(cin, t);
    getline(cin, str);

    // 処理定義
    for(int i=a-1; i<b; i++){
        str[i]=toupper(str[i]);
    }

    // 出力定義
    cout << str << endl;

    return 0;
}