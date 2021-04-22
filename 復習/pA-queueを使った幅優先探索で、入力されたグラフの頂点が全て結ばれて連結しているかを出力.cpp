/* sample input
4 2
1 2
3 2

100 183
68 61
42 61
64 73
78 11
91 31
82 19
26 47
11 81
79 73
64 94
17 85
1 34
93 73
99 10
57 4
30 85
16 6
85 62
80 69
45 20
2 96
90 28
21 27
74 65
15 90
2 46
61 91
93 46
50 38
53 37
24 57
43 36
53 15
56 19
97 36
46 95
45 100
43 40
58 50
32 26
58 92
76 59
29 60
18 80
45 8
56 86
28 49
42 52
96 48
93 53
84 39
23 27
35 52
74 60
93 23
54 1
71 47
84 13
41 2
54 30
13 56
81 75
20 33
25 61
89 90
1 17
24 9
88 14
46 26
41 32
74 63
44 49
5 49
98 46
12 13
41 85
62 76
35 34
55 94
79 57
23 4
26 54
71 3
35 98
75 16
92 38
87 78
80 10
51 56
72 93
99 1
2 78
74 11
31 11
9 15
12 23
66 23
24 60
55 49
85 92
57 75
7 83
87 31
93 31
45 11
10 49
99 50
45 15
83 86
4 74
14 79
5 89
99 12
6 39
90 86
64 47
22 95
84 18
13 22
21 73
8 22
7 100
15 21
50 94
53 68
17 12
83 81
62 37
11 44
2 74
71 91
29 52
18 77
90 78
71 58
93 76
75 54
16 11
44 87
71 42
61 30
77 61
28 54
5 10
58 19
21 67
69 15
8 28
62 83
30 64
33 34
48 50
31 60
87 97
43 7
42 36
38 27
86 14
30 35
10 1
95 53
3 5
64 4
16 73
46 6
28 35
94 75
71 79
95 48
50 49
72 51
86 11
99 35
41 49
10 4
99 8
70 79
97 49
67 94
24 28
1 83
76 28
27 36
*/

/* 実装方針
一直線のグラフと異なり、 １ つの頂点からの遷移先が １ つとは限らないので queue を用いた幅優先探索をします。
グラフが連結かどうかを見るには、 
「任意の１つの頂点から幅優先探索などで、たどり着ける頂点に色を塗った際に、全ての頂点に色を塗ることができるか。」 
を判定すれば良いです。

これを判定するには、次の処理を行えば良いです。
任意の頂点を queue に入れる
( queue が空になるまで繰り返し )
{
queue の先頭を取り出す
graph の情報を元に取り出した頂点につながっている頂点を全て調べる、まだ訪れたことがなければ色を塗り、 queue に入れる 
}

全ての頂点に色が塗ってあれば、任意の頂点から全ての頂点に行けるということなので YES 
１ つでも色の塗られていない点がある場合 NO とすれば良いです。

例として、次のようなグラフは連結です。
頂点の番号は queue に入る順番を表しています。
緑の頂点が注目している頂点、青い頂点が新しく色を塗った頂点、灰色が既に色が塗ってある頂点です。
図 １ から図 ３ のように幅優先探索することで全ての頂点を塗ることができました。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, M;
    cin >> N >> M;

    // 値の有無を識別する配列であるcolorを定義
    int color[N];

    // colorの初期値を0とし、デフォルトでは無とする
    for (int i = 0; i < N; i++){
        color[i] = 0;
    }

    vector<vector<int> > graph(N);
    queue<int> Q;

    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        // aをインデックスとして値bを格納
        graph[a].push_back(b);
        // bをインデックスとして値aを格納
        graph[b].push_back(a);
    }

    // queueの初期値として、0をpushしておく
    Q.push(0);
    // color[0]を1として、あるとする
    color[0]=1;

    while(!Q.empty()){
        // Qの先頭にある値をnowに格納
        int now = Q.front();
        // 格納したら、先頭の値を削除する
        Q.pop();

        for (int i = 0; i < graph[now].size(); i++){
            if(color[graph[now][i]] == 0){
                // colorの指定要素を1とし、有とする
                color[graph[now][i]] = 1;
                // Qの末尾に、graph[now][i]の値を追加する
                Q.push(graph[now][i]);
            }
        }
    }

    // colorを全探索し、一つでも0があったらNOを出力
    for (int i = 0; i < N; i++){
        if(color[i] == 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    // colorを全探索しても、0がなかったらYESを出力
    cout << "YES" << endl;
}

/* 参考回答
while(!Q.empty()){
    int now = Q.front();
    Q.pop();
    for(int i=0;i<graph[now].size();i++){
        if(color[graph[now][i]]==0){
            color[graph[now][i]] = 1;
            Q.push(graph[now][i]);
        }
    }
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    int color[N];

    for (int i = 0; i < N; i++){
        color[i] = 0;
    }

    vector<vector<int> > graph(N);
    queue<int> Q;

    for (int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    Q.push(0);
    color[0] = 1;

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for (int i = 0; i < graph[now].size(); i++){
            if(color[graph[now][i]] == 0){
                color[graph[now][i]] = 1;
                Q.push(graph[now][i]);
            }
        }
    }

    for (int i = 0; i < N; i++){
        if(color[i] == 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
*/