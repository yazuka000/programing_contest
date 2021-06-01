/* sample input
4
0 1 2
1 2 1
1 3 3

4
0 1 1
1 2 2
2 3 4


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define MAX 100000
#define INFTY (1<<30)

class Edge{
    public:
        int t, w;
        Edge(){}
        Edge(int t, int w): t(t), w(w) {}
};

vector<Edge> G[MAX];
int n, d[MAX];

bool vis[MAX];
int cnt;

void bfs(int s){
    for(int i=0; i<n; i++) d[i] = INFTY;
    queue<int> Q;
    Q.push(s);
    d[s] = 0;
    int u;

    while(!Q.empty()){
        u = Q.front();
        Q.pop();

        for(int i=0; i<G[u].size(); i++){
            Edge e = G[u][i];

            if(d[e.t] == INFTY){
                d[e.t] = d[u] + e.w;
                Q.push(e.t);
            }
        }
    }
}

void solve(){
    // 適当な視点 s から最も遠い節点 tgt を求める
    bfs(0);
    int maxv = 0;
    int tgt = 0;

    for(int i=0; i<n; i++){
        if(d[i] == INFTY) continue;

        if(maxv < d[i]){
            maxv = d[i];
            tgt = i;
        }
    }

    // tgtから最も遠い節点であるmaxvを求める
    bfs(tgt);
    maxv = 0;

    for(int i=0; i<n; i++){
        if(d[i] == INFTY) continue;

        maxv = max(maxv, d[i]);
    }
    cout << maxv << endl;
}

int main(){
    int s, t, w;
    cin >> n;

    for(int i=0; i<n-1; i++){
        cin >> s >> t >> w;

        G[s].push_back(Edge(t, w));
        G[t].push_back(Edge(s, w));
    }

    solve();
}

/* 参考回答

*/