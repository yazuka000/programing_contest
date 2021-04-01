/* sample input
19
THREEONEFOURONEFIVE

10
ZABCDBABCQ
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int N, count=0;
    string str, a="ABC";
    cin >> N;
    cin >> str;

    // 処理定義
    for(int i=0; i<=N; i++){
        // substr(i, x)の場合、対象の文字列のインデックスi番から初めて、右にx個分の要素を取得する
        if(str.substr(i,a.size()) == a){
            count++;
        }
    }

    // 出力定義
    cout << count << endl;
    return 0;
}

/* 参考回答

*/