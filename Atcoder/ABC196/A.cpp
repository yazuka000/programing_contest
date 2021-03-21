/* sample input
-100 -100
100 100
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b, c, d, x, y;
    cin >> a >> b;
    cin >> c >> d;

    // 処理定義
    if(a > b){
        x = a;
    } else {
        x = b;
    }

    if(c < d){
        y = c;
    } else {
        y = d;
    }

    // 出力定義
    cout << x-y << endl;

    return 0;
}