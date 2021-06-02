/* sample input
15 6
1 2 7 8 12 50

65 6
1 2 7 8 12 50


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MMAX = 20;
static const int NMAX = 50000;
static const int INFTY = (1<<29);

int main(){
    int n, m;
    int C[21];
    int T[NMAX+1];

    cin >> n >> m;

    for(int i=1; i<=m; i++) cin >> C[i];
    
    // ここからがコイン問題のアルゴリズム
    for(int i=0; i<=NMAX; i++) T[i] = INFTY;
    T[0] = 0;

    for(int i=1; i<=m; i++){
        for(int j=0; j+C[i]<=n; j++){
            T[j+C[i]] = min(T[j+C[i]], T[j]+1);
        }
    }

    cout << T[n] << endl;

}

/* 参考回答

*/