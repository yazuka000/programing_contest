/* sample input
6
5 6 4 2 1 3

6
5 2 4 6 1 3
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 選択ソート(0オリジン)
int selectionSort(int A[], int N){
    int i, j, t, minj;
    int sw = 0;

    for(i=0; i<N; i++){
        minj = i;

        for(j=i; j<N; j++){
            if(A[j] < A[minj]) minj = j;
        }

        t = A[i];
        A[i] = A[minj];
        A[minj] = t;

        if(i != minj) sw++;
    }

    return sw;
}

int main(){
    int A[100], N, i, sw;

    scanf("%d", &N);

    for(i=0; i<N; i++) scanf("%d", &A[i]);

    sw = selectionSort(A, N);

    for(i=0; i<N; i++){
        if(i>0) printf(" ");
        
        printf("%d", A[i]);
    }

    printf("\n");
    printf("%d\n", sw);
}

/* 参考回答

*/