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
頂点の数が N であるような無向グラフにおいて、N 個の配列を持つ２次元配列 g を考えます。 
i 番目の頂点と j 番目の頂点が辺で結ばれているとき、g の i-1 番目の配列に j-1 , g の j-1 番目の配列に i-1 を追加します。 
この操作を繰り返してできる２次元配列 g を隣接リストといいます。 

グラフの頂点・辺についての情報が与えられるので、このグラフの隣接リストを出力してください。 
なお、このグラフには、多重辺や自己ループはないものとします。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, m;
    cin >> n >> m;
    // 可変長配列の2次元配列gを作成
    vector<vector<int> > g(n);

    // 入力・処理
    rep(i, m){
        int a, b;
        cin >> a >> b;
        // インデックス番号と合わせるため、aとbをマイナスする
        a--;
        b--;
        // 2次元配列gの配列aに要素bを、配列bに要素aを末尾に追加
        g[a].push_back(b);
        g[b].push_back(a);
    }

    // 出力
    rep(i, n){
        // sort関数でgの各配列を昇順に入れ替える
        sort(g[i].begin(), g[i].end());

        // gの各配列の要素数だけ出力する
        rep(j, g[i].size()){
            cout << g[i][j];
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