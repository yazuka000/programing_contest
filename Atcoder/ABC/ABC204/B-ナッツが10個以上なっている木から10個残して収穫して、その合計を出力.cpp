/* sample input
3
6 17 28

4
8 9 10 11
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, cnt = 0;
    cin >> n;

    vector<int> a(n);

    rep(i, n) cin >> a[i];

    // 処理
    rep(i, n){
        if(a[i]>10) cnt += a[i]-10;
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答

*/