/* sample input
3 2
2 2
5 3
0 0
*/

/* 制約・条件

*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int x, y;

    // 処理・出力定義
    while(true){
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x < y) {
            cout << x << " " << y << endl;
        } else {
            cout << y << " " << x << endl;
        }
    }
    return 0;
}
