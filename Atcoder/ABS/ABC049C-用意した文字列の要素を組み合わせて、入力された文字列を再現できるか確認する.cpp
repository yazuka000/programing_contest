/* sample input
erasedream


*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    // 文字列を最初に左右反転させる理由は、
    // 入力を想定されている値は、先頭よりも末尾が異なっている可能性が高いからである
    // したがって、文字列を反転させることで、末尾から判定を行い、計算量を減らしている

    // 入力された文字列Sを左右反転する
    reverse(S.begin(), S.end());

    rep(i, 4){
        // devide内の要素の文字列ごとに左右反転する
        reverse(divide[i].begin(), divide[i].end());
    }

    bool can = true;
    for (int i = 0; i < S.size();) {
        // bool型で初期値として、can2にfalseを格納する
        // 下のループを抜け、上のループに戻るたびにcan2にfalseが再格納される
        bool can2 = false;
        for (int j = 0; j < 4; j++) {
            string d = divide[j];

            // 文字列Sの、iからdevide[j]の文字列の長さが、devide[j]と一致していた場合
            if (S.substr(i, d.size()) == d) {
                // can2の値にtrueを格納する
                can2 = true;
                // 上のループのiを、devide[j]で取得していた文字列の長さだけプラスする
                i += d.size();
            }
        }

        // 外側のループを抜けたときに、can2の値がfalseだった場合
        if (!can2) {
            can = false;
            break;
        }
    }

    // 最終的にcanがtrueだった場合YES、falseならNOを出力する
    if(can){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    // 端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4 個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                can2 = true;
                i += d.size(); // divide できたら i を進める
            }
        }
        if (!can2) { // divide できなかったら
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}
*/