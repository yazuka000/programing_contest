/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;
    t[0] = x[0] = y[0] = 0;  // 初期状態

    rep(i, N){
        // i+1 にしておくことで、初期値として入力したインデックス0の上書きを防ぐ
        cin >> t[i+1] >> x[i+1] >> y[i+1];  
    }

    // 処理
    bool can = true;

    rep(i, N) {
        // 変数dtは、移動できるターン数を表す
        int dt = t[i+1] - t[i];

        // 変数distは、xとyの必要移動距離を絶対値を足し算することで表している
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);

        // 変数distが変数dtを上回っていると、どう頑張っても目標の座標にたどり着けないため、falseとなる
        if (dt < dist) can = false;

        // 下の条件式は、distとdtの偶数奇数が一致しているかどうかを表す
        // 偶奇が一致していないと、目標座標の(x, y)にたどり着くのにターンと移動量がずれてしまいたどり着けなくなるため、falseを出力する
        if (dist % 2 != dt % 2) can = false;
    }

    // 出力
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}



/* 参考回答
#include <iostream>
using namespace std;

int main() {
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;
    t[0] = x[0] = y[0] = 0;  // 初期状態
    for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];  // 1-index にしておく

    bool can = true;
    for (int i = 0; i < N; ++i) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) can = false;
        if (dist % 2 != dt % 2) can = false;  // dist と dt の偶奇は一致する必要あり！
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
*/