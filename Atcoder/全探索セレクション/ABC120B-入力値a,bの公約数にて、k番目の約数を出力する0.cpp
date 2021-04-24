/* sample input
8 12 2

100 50 4

1 1 1
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int a, b, k;
    cin >> a >> b >> k;

    // 処理定義
    // 最初にaとbのうち小さい方を基準にし、そこからマイナスしてループさせる
    for(int i=min(a, b); i>0; i--){
        // aとb両方とも割り切れる値が出たら、kをマイナスしていく
        if(a%i==0 && b%i==0){
            k--;
        }

        // kが0になった時点のiが、k番目の約数となる
        if(k==0){
            cout << i << endl;
            return 0;
        }
    }

    // 出力定義
}

/* 参考回答

*/