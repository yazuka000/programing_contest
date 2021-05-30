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

int main(){
    int M[N][N]; // 0オリジンの隣接行列
    int n, u, k, v;

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) M[i][j] = 0;
    }

    for(int i=0; i<n; i++){
        cin >> u >> k;
        u--; // 0オリジンへ変換

        for(int j=0; j<k; j++){
            cin >> v;
            v--; // 0オリジンへ変換

            M[u][v] = 1; // uとvの間に辺を張る
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j) cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }
    
}

/* 参考回答

*/