/* sample input
5
1 2 3 4 5
3
3 4 1

3
1 2 3
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

int A[1000000], n;

// 二分探索 
// 配列が順列にソートされていることが前提となっている
int binarySearch(int key){
    int left = 0;
    int right = n;
    int mid;

    while(left < right){
        // leftとrightを足して2で割り、中間のインデックスを指定するmidを格納
        mid = (left + right) / 2;

        if(key == A[mid]) return 1; // key(=検索対象)を発見

        // 後半を検索 // A[mid]がkeyよりも小さい = 検索範囲を半分に分け、右側にkeyが含まれている
        if(key > A[mid]) left = mid + 1; 

        // 前半を検索 // A[mid]がkeyよりも大きい = 検索範囲を半分に分け、左側にkeyが含まれている
        else if(key < A[mid]) right = mid; 
    }

    return 0;
}

int main(){
    int i, q, k, sum = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &A[i]);

    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &k);
        if(binarySearch(k)) sum++;
    }

    printf("%d\n", sum);
}

/* 参考回答

*/