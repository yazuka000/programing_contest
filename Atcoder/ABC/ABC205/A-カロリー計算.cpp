/* sample input
45 200

37 450

0 1000

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // 100mlでaキロカロリー、実量b ml
    float a, b;
    float ans=0;

    cin >> a >> b;

    b = b / 100;

    ans = a*b;

    cout << ans << endl;
}

/* 参考回答

*/