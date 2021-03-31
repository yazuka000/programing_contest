/* sample input
A
D
Z
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    // 前提として、a < b の関係である。そうでなかった場合はその時点でfalseとなる
    char a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // 処理定義
    if(a <= c && c <= b){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}