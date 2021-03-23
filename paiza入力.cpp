/* sample input
2 6
this is a pen
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string t, str;

    cin >> a >> b;

    // getlineを２行目以降の入力に使うと、空白行が入力されてしまい、本命の文字列が入力ができない
    // そのため、本命の前に空白行を格納させるgetlineをもう一つ用意することで、エラー回避ができる
    getline(cin, t);
    getline(cin, str);

    for(int i=a-1; i<b; i++){
        cout << str[i];
    }
    cout << endl;

    return 0;
}



