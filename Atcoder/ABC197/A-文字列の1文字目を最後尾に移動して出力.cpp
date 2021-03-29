/* sample input
aab
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    string str;
    cin >> str;

    // 処理定義
    str = str.substr(1, str.size()) + str.substr(0, 1); 

    // 出力定義
    cout << str << endl;
    

    return 0;
}