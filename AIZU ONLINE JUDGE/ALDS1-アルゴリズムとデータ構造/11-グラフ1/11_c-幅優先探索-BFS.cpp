/* sample input
4
1 2 2 4
2 1 4
3 0
4 1 3


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int N = 100;
static const int INFTY = (1<<21);

int n, M[N][N];
int d[N]; // 距離で訪問状態(color)を管理する

void bfs(int s){
    queue<int> q; // 標準ライブラリqueueを使用
    q.push(s);

    for(int i=0; i<n; i++) d[i] = INFTY;

    d[s] = 0;
    int u;

    while(!q.empty()){
        u = q.front();
        q.pop();

        for(int v=0; v<n; v++){
            if(M[u][v] == 0) continue;
            if(d[v] != INFTY) continue;

            d[v] = d[u] + 1;
            q.push(v);
        }
    }

    for(int i=0; i<n; i++){
        cout << i+1 << " " << ((d[i] == INFTY) ? (-1) : d[i]) << endl;
    }
}

int main(){
    int u, k, v;
    
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) M[i][j] = 0;
    }

    for(int i=0; i<n; i++){
        cin >> u >> k;
        u--;

        for(int j=0; j<k; j++){
            cin >> v;
            v--;
            M[u][v] = 1;

        }
    }

    bfs(0);

}

/* 参考回答

*/