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
        // minjにi(その時の最小のインデックス)を格納する
        minj = i;

        for(j=i; j<N; j++){
            // もしA[j]の値が、A[minj]より小さかった場合、minjにjを代入する
            if(A[j] < A[minj]) minj = j;
        }

        // まず、tにその時のA[i]の値を格納し、変更前の値を保存しておく
        t = A[i];
        // A[minj]の値をA[i]に格納する
        A[i] = A[minj];
        // A[minj]には、もとのA[i]の値を格納したtの値を代入する。この一連でソートを行う
        A[minj] = t;

        // iがminjと一致していない、つまりソートを行ったということなので、swに1カウントする
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