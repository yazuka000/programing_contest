/* sample input
147 105


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// ループによる最大公約数
// ユークリッドの互除法
int gcd(int x, int y){
    int r;
    if(x < y) swap(x, y); // y < x を保証する

    while(y > 0){
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

}

/* 参考回答

*/