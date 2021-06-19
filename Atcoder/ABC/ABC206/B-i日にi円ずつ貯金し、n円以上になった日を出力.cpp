/* sample input
12

100128


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    ll n, cnt = 0;

    // 入力
    cin >> n;

    // 処理
    for(int i=1; ; i++){
        cnt += i;

        if(cnt >= n){
            cout << i << endl;
            return 0;
        }
    }
}

/* 参考回答

*/