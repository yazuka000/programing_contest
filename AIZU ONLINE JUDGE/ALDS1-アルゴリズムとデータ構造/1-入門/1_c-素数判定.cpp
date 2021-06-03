/* sample input
6
2
3
4
5
6
7


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 素数判定
// エラトステネスの篩　アルゴリズム
int isPrime(int x){
    int i;

    if(x < 2) return 0;
    else if(x == 2) return 1; // 2は素数
    if(x % 2 == 0) return 0; // 偶数は素数ではない

    for(i=3; i*i<=x; i+=2){ // iがxの平方根以下の間
        if(x % i == 0) return 0;
    }

    return 1;
}


int main(){
    int n, x, i;
    int cnt = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(isPrime(x)) cnt++;
    }

    printf("%d\n", cnt);

}

/* 参考回答

*/