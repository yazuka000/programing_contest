/* sample input
5
1 5 7 10 21
4
2 4 17 8


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, A[50]; 

// 再帰関数とは、関数の中で関数を呼び出すことでループ処理を再現している関数を指す

// 入力値のMから選んだ要素を引いていく再帰関数(全探索の再帰関数)
int solve(int i, int m){
    // mが0なら、配列内の要素を選ばなくても成立するため、真となり、処理を抜ける
    if(m == 0) return 1;

    // i(=関数の左辺)がインデックスの要素数nを超えたら、その時点で一致する可能性がなくなるので偽となり、処理を抜ける
    if(i >= n) return 0;

    // 下は、solve関数を2つ呼び出し、答えがreturn 1 = true となった値をresに格納している
    int res = solve(i+1, m) || solve(i+1, m-A[i]);

    return res;
}

int main(){
    int q, M, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &A[i]);

    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &M);
        if(solve(0, M)) printf("yes\n");
        else printf("no\n");
    }
}

/* 参考回答

*/