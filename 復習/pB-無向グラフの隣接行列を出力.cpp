/* sample input
2 1
1 2

10 10
1 4
8 3
4 6
5 3
2 8
4 8
10 3
1 5
1 9
3 2
*/

/* 実装方針
頂点の数が N であるような無向グラフにおいて、N × N の配列 g を考えます。 
i 番目の頂点と j 番目の頂点が辺で結ばれているとき、 g[i-1][j-1] = 1 
結ばれていないとき、g[i-1][j-1] = 0 であるような配列をそのグラフの隣接行列といいます。 

グラフの頂点・辺についての情報が与えられるので、このグラフの隣接行列を出力してください。 
なお、このグラフには、多重辺や自己ループはないものとします。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, m;
    cin >> n >> m;
    // n*nの配列gを作成
    int g[n][n];

    // 入力
    // 配列gの全値を0で初期化
    rep(i, n){
        rep(j, n){
            g[i][j]=0;
        }
    }

    // 処理
    rep(i, m){
        // 入力されたa,bにあたる座標を入力
        int a, b;
        cin >> a >> b;

        // インデックス番号と合わせるため、aとbから1ずつマイナスする
        a--;
        b--;

        // 配列gの[a][b]と[b][a]の要素が1となり、隣接行列となる
        g[a][b]=1;
        g[b][a]=1;
    }

    // 出力
    rep(i, n){
        rep(j, n){
            cout << g[i][j];
        }
        cout << endl;
    }
}

/* 参考回答
#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int g[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            g[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        g[a][b] = 1;
        g[b][a] = 1;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << g[i][j];
        }
        cout << endl;
    }
}
*/