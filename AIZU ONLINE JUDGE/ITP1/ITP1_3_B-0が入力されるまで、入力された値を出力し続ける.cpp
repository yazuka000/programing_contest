/* sample input
3
5
11
7
8
19
0
*/

/* 制約・条件

*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int i = 0;
    int num;

    // 処理定義
    while (true) {
        cin >> num;
        if (num == 0) break;
        i++;

        // 出力定義
        cout << "Case " << i << ":" << " " << num << endl;
    }
    return 0;
}
