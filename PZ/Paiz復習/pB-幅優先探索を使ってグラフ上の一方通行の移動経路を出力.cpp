/* sample input
3
2 1
2 3

10
1 9
9 6
4 6
2 4
3 2
5 3
7 5
10 7
10 8
*/

/* 実装方針
一直線であるグラフの頂点の数 N , 辺の両端の頂点 a_i , b_i が与えられます。
あなたは、頂点 1 から出発して、後戻りせずに移動できなくなるまで辺をたどります。
訪れた頂点の番号を順に出力してください。

例として、次のような入力のとき、移動イメージは次の画像通りです。


グラフの辺を移動していく処理は、基本的には幅優先探索とみなせます。
今回の問題はその中でも遷移先が １ つという特殊なパターンだと思ってください。

グラフの頂点を一度ずつ訪れる問題では、訪れたかどうかを管理する配列を持っておくと、グラフ上での逆走を防ぐことができ、うまく実装できます。

幅優先探索の一種なので、「移動を行う→移動先を記録」 の繰り返しが基本です。
これを繰り返しながら、訪れた頂点を順に出力していきます。

この問題では遷移先が １ つであることが保証されているため、
移動→移動先を記録 が各頂点につき最大 １ 回しか起こらないので 
queue を用いなくても配列で訪れた頂点を順番に出力しながら、末尾の要素を使って探索できます。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N;
    cin >> N;

    // 2次元配列graph
    vector<vector<int> > graph(N);

    // 配列visitとdoneを定義、doneは全要素を0で初期化
    vector<int> visit, done(N,0);

    visit.push_back(0);
    done[0] = 1;

    for (int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        // aをインデックスとして値bを格納
        graph[a].push_back(b);
        // bをインデックスとして値aを格納
        graph[b].push_back(a);
    }

    while(visit.size() != N){
        // visitの末尾をnowに代入
        int now = visit.back();


        for (int j=0; j<graph[now].size(); j++){
            // doneの要素が0のとき
            if(done[graph[now][j]] == 0){
                // visitの末尾にgraphの指定要素を追加
                visit.push_back(graph[now][j]);
                // 対象のdoneの要素を1にする
                done[graph[now][j]] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++){
        // visitの値に+1して出力
        cout << visit[i] + 1 << endl;
    }
}

/* 参考回答
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int> > graph(N);
    vector<int> visit,done(N,0);

    visit.push_back(0);
    done[0] = 1;

    for (int i = 0; i < N-1; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    while(visit.size() != N){
        int now = visit.back();
        for (int j = 0; j < graph[now].size(); j++){
            if(done[graph[now][j]] == 0){
                visit.push_back(graph[now][j]);
                done[graph[now][j]] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++){
        cout << visit[i] + 1 << endl;
    }
}


#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n;
    cin >> n;
    vector<int> g(n);

    // 入力
    rep(i, n-1){
        int a, b;
        cin >> a >> b;

        if(a==1){
            g[i]=a;
            g[i+1]=b;
            break;
        }else if(b==1){
            g[i]=b;
            g[i+1]=a;
            break;
        }

        if(a==g[i]){
            g[i+1]=b;
        }else if(b==g[i]){
            g[i+1]=a;
        }
    }

    // 処理

    // 出力
    rep(i, n) cout << g[i] << endl;
}
*/