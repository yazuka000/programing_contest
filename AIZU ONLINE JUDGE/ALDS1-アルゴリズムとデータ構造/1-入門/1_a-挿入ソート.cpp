/* sample input
6
5 2 4 6 1 3

3
1 2 3
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 配列の要素を順番に出力する
void trace(int A[], int N){
    int i;
    for(i=0; i<N; i++){
        if(i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

// 挿入ソート(0オリジン)
void insertionSort(int A[], int N){
    int j, i, v;

    // iが基準、jはiの前の値を表す
    for(i=1; i<N; i++){
        v = A[i];
        j = i-1;

        // jが0以上かつ、A[j]がvより大きな値となった場合、ループを抜ける
        while(j>=0 && A[j]>v){
            A[j+1] = A[j];
            j--;
        }

        // 上でvに対比した値を、A[j+1]に格納して、値を整える
        A[j+1] = v;
        trace(A, N);
    }
}

int main(){
    int N, i, j;
    int A[100];

    scanf("%d", &N);

    for(i=0; i<N; i++) scanf("%d", &A[i]);

    // 入力した値を、そのまま出力する
    trace(A, N);

    // 挿入ソートを行い、その都度ソート後の結果を出力する
    insertionSort(A, N);
    
    return 0;
}

/* 参考回答

*/