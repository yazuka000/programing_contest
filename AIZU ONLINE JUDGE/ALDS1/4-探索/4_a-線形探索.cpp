/* sample input
5
1 2 3 4 5
3
3 4 1

3
3 1 2
1
5

5
1 1 2 2 3
2
1 2
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 線形探索の関数
int search(int A[], int n, int key){
    int i = 0;
    A[n] = key;

    while(A[i] != key) i++;

    return i != n;
}

int main(){
    int i, n, A[10000+1], q, key, sum = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &A[i]);

    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &key);
        if(search(A, n, key)) sum++;
    }

    printf("%d\n", sum);
}

/* 参考回答

*/