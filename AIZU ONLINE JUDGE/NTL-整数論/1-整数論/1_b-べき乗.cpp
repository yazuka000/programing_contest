/* sample input
2 3

5 8
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 繰り返し自乗法　を使ったべき乗
ull power(ull x, ull n, ull M){
    ull res = 1;
    if(n > 0){
        res = power(x, n/2, M);

        if(n % 2 == 0) res = (res * res) % M;
        else res = (((res * res) % M) * x) % M;
    }

    return res;
}

int main(){
    int m, n;
    cin >> m >> n;

    cout << power(m, n, 1000000007) << endl;

}

/* 参考回答

*/