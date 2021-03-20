/* sample input
5 14 80
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int x, y, z, num;
    cin >> x >> y >> z;

    // 処理定義
    for (; x<= y; x++) {
        if (z % x == 0) num++;
	}

    // 出力定義
    cout << num << endl;
    return 0;
}
