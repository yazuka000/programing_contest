/* sample input
5
5
1
3
2
4

3
1
1
1
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define MAX 100000

int n, A[MAX+1], L[MAX];

// 最長増加部分列を求めるアルゴリズム
int lis(){
    L[0] = A[0];
    int length = 1;

    for(int i=1; i<n; i++){
        if(L[length-1] < A[i]){
            L[length++] = A[i];

        }else{
            *lower_bound(L, L+length, A[i]) = A[i];
        }
    }

    return length;
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++) cin >> A[i];

    cout << lis() << endl;

}

/* 参考回答

*/