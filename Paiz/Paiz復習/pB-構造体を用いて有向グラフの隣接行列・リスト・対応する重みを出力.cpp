/* sample input
10 2
5 9 8070
9 10 2464

20 17
11 4 3748
11 17 1346
12 17 9833
6 12 7794
9 7 6672
13 6 7348
17 13 8287
6 9 5055
11 1 7422
19 3 7471
12 14 9239
2 10 1792
3 12 7928
19 17 6249
14 13 7833
1 8 2173
20 6 6165
*/

/* 実装方針
頂点の数が N であるような有向グラフにおいて、N × N の配列 g を考えます。 
i 番目の頂点から j 番目の頂点に向かう重み k の辺があるとき、 g[i - 1][j - 1] = k, ないとき、 g[i - 1][j - 1] = 0 
であるような配列をそのグラフの隣接行列といいます。

頂点の数が N であるような有向グラフにおいて、 N 個の配列を持つ２次元配列 g を考えます。 
i 番目の頂点から j 番目の頂点に向かう重み k の辺があるとき、 g の i - 1 番目の配列に構造体などを用いて j - 1 と k を追加します。 
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

    // pairやtupleを用いれば、配列の入れ子という形で辞書型を定義できる
    // 「構造体を用いる」というのは、要は入れ子で新たなデータ型を定義することである?
    vector<vector<pair<int, int>>> g2(n);

    rep(i, n){
        rep(j, n){
            g1[i][j]=0;
        }
    }

    // 入力・処理
    rep(i, m){
        int a, b, k;
        cin >> a >> b >> k;
        a--;
        b--;

        g1[a][b]=k;

        // g2のインデックスaの配列に、pairによる辞書型の値bとkを入力している
        g2[a].emplace_back(b, k);
    }

    // 出力
    rep(i, n){
        rep(j, n){
            cout << g1[i][j];
        }
        cout << endl;
    }

    rep(i, n){
        sort(g2[i].begin(), g2[i].end());
        rep(j, g2[i].size()){

            //g2[i][j]に対応するpairの1つ目の値(first)と、2つ目の値(second)を出力
            cout << g2[i][j].first << '(' << g2[i][j].second << ')';
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
    int g[N][N];
    vector<vector<pair<int,int> > > G(N);

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            g[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++){
        int a,b,k;
        cin >> a >> b >> k;
        a--;
        b--;
        g[a][b] = k;
        G[a].emplace_back(b,k);
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << g[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++){
        sort(G[i].begin(),G[i].end());
        for (int j = 0; j < G[i].size(); j++){
            cout << G[i][j].first << '(' << G[i][j].second << ')';
        }
        cout << endl;
    }
}

*/