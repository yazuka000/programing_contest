/* sample input
3
1 3
2 3
5
1
7

20
19 6
18 5
16 4
14 12
13 2
17 18
5 8
4 7
2 14
15 16
1 17
11 20
8 15
6 11
12 9
7 13
9 3
20 10
3 19
99
91
86
44
85
51
51
58
82
94
77
61
68
90
41
14
97
82
65
18
*/

/* 実装方針
グラフの移動時に持つ情報は、今いる頂点とりんごの数の 2 つです。

各頂点でのりんごの数を管理するには、りんごの数を表す配列 apple を作り、 移動を行う際に、
「apple[移動先] = apple[移動元] + 移動先にあるりんごの数」
の計算を繰り返せば、りんごの情報を持つことができます。

頂点とりんごの数を 1 つの配列に一緒に持つ方針でもきれいに実装できます。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, sum=0;
    cin >> N;

    // 2次元配列graph
    vector<vector<int> > graph(N);

    // 配列visitとdoneとapplesを定義、doneは全要素を0で初期化
    vector<int> visit, done(N,0), apples(N);

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

    // 0からnまでの値をインデックスとして、applesにりんごの数を入力する
    rep(i, N) cin >> apples[i];

    visit.push_back(0);
    done[0] = 1;
    sum+=apples[0];
    cout << sum << endl;


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
                // sumに、apples[graph[now][j]]の要素をインデックスとしたりんごの数をプラスする
                sum+=apples[graph[now][j]];
            }
        }
        cout << sum << endl;
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

    int sum = 0;
    vector<vector<int> > graph(N);
    vector<int> visit,done(N,0),apples(N);

    for (int i = 0; i < N-1; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < N; i++){
        cin >> apples[i];
    }

    visit.push_back(0);
    done[0] = 1;
    sum += apples[0];
    cout << sum << endl;

    while(visit.size() != N){
        int now = visit.back();
        for (int j = 0; j < graph[now].size(); j++){
            if(done[graph[now][j]] == 0){
                visit.push_back(graph[now][j]);
                done[graph[now][j]] = 1;
                sum += apples[graph[now][j]];
            }
        }
        cout << sum << endl;
    }
}
*/