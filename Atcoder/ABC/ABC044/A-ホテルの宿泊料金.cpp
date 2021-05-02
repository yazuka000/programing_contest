/* sample input
5
3
10000
9000

2
3
10000
9000
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // 宿泊総数をn日、最初のk泊はx円、k泊以上の宿泊料金は1日ごとにy円となる
    int n, k, x, y, sum=0;

    // 入力
    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;

    // 処理
    if(n-k > 0){
        sum=(k*x)+((n-k)*y);
    }else{
        sum=n*x;
    }

    // 出力
    cout << sum << endl;
}

/* 参考回答

*/