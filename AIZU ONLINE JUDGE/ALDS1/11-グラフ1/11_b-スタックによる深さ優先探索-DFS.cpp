/* sample input
4
1 1 2
2 1 4
3 0
4 1 3

6
1 2 2 3
2 2 3 4
3 1 5
4 1 6
5 1 6
6 0
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[N][N];
int color[N], d[N], f[N], tt;

int nt[N];

// uに隣接するvを番号順に取得
int next(int u){
    for(int v=nt[u]; v<n; v++){
        nt[u] = v+1;

        if(M[u][v]) return v;
    }

    return -1;
}

// スタックを用いた深さ優先探索
void dfs_visit(int r){
    for(int i=0; i<n; i++) nt[i] = 0;

    stack<int> S;
    S.push(r);
    color[r] = GRAY;
    d[r] = ++tt;

    while(!S.empty()){
        int u = S.top();
        int v = next(u);

        if(v != -1){
            if(color[v] == WHITE){
                color[v] = GRAY;
                d[v] = ++tt;
                S.push(v);
            }

        }else{
            S.pop();
            color[u] = BLACK;
            f[u] = ++tt;
        }
    }
}

void dfs(){
    // 初期化
    for(int i=0; i<n; i++){
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;

    // 未訪問のuを始点として深さ優先探索
    for(int u=0; u<n; u++){
        if(color[u] == WHITE) dfs_visit(u);
    }

    for(int i=0; i<n; i++){
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
}

int main(){
    int u, v, k, i, j;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++) M[i][j] = 0;
    }

    for(i=0; i<n; i++){
        scanf("%d %d", &u, &k);
        u--;

        for(j=0; j<k; j++){
            scanf("%d", &v);
            v--;

            M[u][v] = 1;
        }
    }

    dfs();

}

/* 参考回答

*/