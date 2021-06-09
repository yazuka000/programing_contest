/* sample input
2 1
2 1

10 10
2 4
5 7
4 7
9 10
10 2
1 5
1 8
4 5
7 8
1 10
*/

/* 実装方針
頂点の数が N であるような有向グラフにおいて、 N × N の配列 g を考えます。 
i 番目の頂点から j 番目の頂点に向かう辺があるとき、 g[i-1][j-1] = 1 , ないとき、 g[i-1][j-1] = 0 
であるような配列をそのグラフの隣接行列といいます。 

頂点の数が N であるような有向グラフにおいて、 N 個の配列を持つ２次元配列 g を考えます。 
i 番目の頂点から j 番目の頂点に向かう辺があるとき、 g の i-1 番目の配列に j-1 を追加します。 
この操作を繰り返してできる２次元配列 g を隣接リストといいます。 

グラフの頂点・辺についての情報が与えられるので、このグラフの隣接行列と隣接リストを出力してください。 
なお、このグラフには、多重辺や自己ループはないものとします。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, m;
    cin >> n >> m;
    int g1[n][n];
    // 可変長配列の2次元配列gを作成
    vector<vector<int> > g2(n);

    // 配列gの全値を0で初期化
    rep(i, n){
        rep(j, n){
            g1[i][j]=0;
        }
    }

    // 入力・処理
    rep(i, m){
        int a, b;
        cin >> a >> b;
        // インデックス番号と合わせるため、aとbをマイナスする
        a--;
        b--;

        // 配列gの[a][b]の要素が1となり、隣接行列となる
        // 有向グラフのため、aからbのみの乗法が対象となる
        g1[a][b]=1;

        // 下記は無向グラフの場合
        // g1[b][a]=1;

        // 2次元配列gの配列aに要素bを末尾に追加
        // 有向グラフのため、aからbのみの乗法が対象となる
        g2[a].push_back(b);

        // 下記は無向グラフの場合
        // g2[b].push_back(a);
    }

    // 出力
    rep(i, n){
        rep(j, n){
            cout << g1[i][j];
        }
        cout << endl;
    }

    rep(i, n){
        // sort関数でgの各配列を昇順に入れ替える
        sort(g2[i].begin(), g2[i].end());

        // gの各配列の要素数だけ出力する
        rep(j, g2[i].size()){
            cout << g2[i][j];
        }
        cout << endl;
    }
}

/* 参考回答
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<int> > g(N);

    for (int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < N; i++){
        sort(g[i].begin(),g[i].end());
        for (int j = 0; j < g[i].size(); j++){
            cout << g[i][j];
        }
        cout << endl;
    }
}
*/