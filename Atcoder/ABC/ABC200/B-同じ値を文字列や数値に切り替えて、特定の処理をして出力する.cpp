/* sample input
2021 4

40000 2

8691 20
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    ll n, k;
    string nn;
    cin >> n >> k;

    // 処理
    rep(i, k){
        if(n%200==0){
            n /= 200;
        }else{
            nn = to_string(n);
            nn+="200";
            n = stoll(nn);
        }
    }

    nn = to_string(n);

    // 出力
    cout << nn << endl;
}

/* 参考回答

*/