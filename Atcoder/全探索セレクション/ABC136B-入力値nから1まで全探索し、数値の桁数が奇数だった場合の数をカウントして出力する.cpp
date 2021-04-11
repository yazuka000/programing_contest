/* sample input
11

136

100000
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値;
    int n, count=0;
    cin >> n;

    // 処理
    // nが1になるまで引き算して全探索
    for(int i=n; i>=1; i--){

        // lenに、iを文字列とした場合の長さ・桁数を格納する
        int len=to_string(i).size();

        // lenが奇数だった場合、カウント
        if(len%2 != 0){
            count++;
        }
    }

    // 出力
    cout << count << endl;
    return 0;
}

/* 参考回答

*/