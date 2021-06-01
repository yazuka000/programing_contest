/* sample input
6 6
0 1
1 2
3 1
3 4
4 5
5 2

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 100000;

vector<int> G[MAX];
list<int> out;
bool V[MAX];
int N;

void dfs(int u){
    V[u] = true;

    for(int i=0; i<G[u].size(); i++){
        int v = G[u][i];
        if(!V[v]) dfs(v);
    }
    out.push_front(u);
}

int main(){
    int s, t, M;

    cin >> N >> M;

    for(int i=0; i<N; i++) V[i] = false;

    for(int i=0; i<M; i++){
        cin >> s >> t;
        G[s].push_back(t);
    }

    for(int i=0; i<N; i++){
        if(!V[i]) dfs(i);
    }

    for(list<int>::iterator it = out.begin(); it != out.end(); it++){
        cout << *it << endl;
    }

}

/* 参考回答

*/