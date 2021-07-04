/* sample input
9

119

10000000


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

    int money[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

    int i = 9;

    // 処理
    while(1){
        if(n >= money[i]){
            n -= money[i];
            cnt++;
        }else{
            i--;
        }

        if(i < 0) break;
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答

*/