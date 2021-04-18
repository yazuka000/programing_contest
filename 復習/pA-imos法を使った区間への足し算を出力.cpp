/* sample input
10 5
1 2 3 4 5 6 7 8 9 10
1 6 10
8 10 5
2 8 3
3 7 -5
3 6 1

1 1
1
1 1 100
*/

/* 実装方針
全てのクエリを問題文の通り処理すると、計算量が O(N^2) となってしまいます。
そこで、累積和を用いた imos法 というアルゴリズムを用いることで計算量を落とすことができます。 

imos法の概要は次の通りです。
・クエリ用の配列addを用意し、区間 [a,b] に c を足すという処理を行う場合、
・add[a] += c; add[b+1] -= c; をおこないます。（このとき配列の範囲外にアクセスしないように注意してください。）
・全てのクエリの処理が終わったら、 add についての累積和 add_i を A[i] に足します。

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, m;
    cin >> n >> m;
    vector<long long int> A(n), add(n+1, 0);

    // 入力
    rep(i, n) cin >> A[i];
    
    // 処理
    rep(i, m){
        long long int l,u,a;
        cin >> l >> u >> a;
        add[l-1] += a;
        add[u] -= a;
    }

    // 出力
    rep(i, n){
        cout << A[i] + add[i] << endl;
        add[i+1] += add[i];
    }
}

/* 参考回答
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int N,M;
    cin >> N >> M;
    vector<long long int> A(N),add(N+1,0);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < M; i++){
        long long int l,u,a;
        cin >> l >> u >> a;
        add[l-1] += a;
        add[u] -= a;
    }

    for (int i = 0; i < N; i++){
        cout << A[i] + add[i] << endl;
        add[i+1] += add[i];
    }
}
*/