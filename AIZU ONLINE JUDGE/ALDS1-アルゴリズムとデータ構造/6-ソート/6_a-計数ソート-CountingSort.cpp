/* sample input
7
2 5 1 3 2 3 0

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MAX 2000001
#define VMAX 10000

int main(){
    unsigned short *A, *B;

    int C[VMAX + 1];
    int n, i, j;

    scanf("%d", &n);

    // mallocはデフォルトでvoid型となっている
    // 変数の型と、格納する変数の値の型は一致していないとエラーになる
    A = (unsigned short *)malloc(sizeof(short) * n + 1);
    B = (unsigned short *)malloc(sizeof(short) * n + 1);

    for(i=0; i<=VMAX; i++) C[i] = 0;

    for(i=0; i<n; i++){
        scanf("%hu", &A[i+1]);
        C[A[i+1]]++;
    }

    for(i=1; i<=VMAX; i++) C[i] = C[i] + C[i-1];

    for(j=1; j<=n; j++){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

    for(i=1; i<=n; i++){
        if(i > 1) printf(" ");
        printf("%d", B[i]);
    }

    printf("\n");

}

/* 参考回答

*/