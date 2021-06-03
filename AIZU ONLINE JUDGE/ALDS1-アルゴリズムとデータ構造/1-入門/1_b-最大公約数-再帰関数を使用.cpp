/* sample input
147 105

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 再帰関数を使った最大公約数
int gcd(int x, int y){
    return y ? gcd(y, x%y) : x;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    
}

/* 参考回答

*/