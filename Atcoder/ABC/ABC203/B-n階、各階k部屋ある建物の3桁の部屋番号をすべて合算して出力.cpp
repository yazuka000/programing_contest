/* sample input
1 2

3 3
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // nが階数、kが1階ごとの部屋数
    int n, k;

    // 合計を計算する変数の初期値は必ず0を入れておく、さもないとエラーになる
    int count=0;

    // 入力
    cin >> n >> k;

    // 処理
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            count += (100*i) + (1*j);
        }
    }

    // 出力
    cout << count << endl;
}

/* 参考回答

*/