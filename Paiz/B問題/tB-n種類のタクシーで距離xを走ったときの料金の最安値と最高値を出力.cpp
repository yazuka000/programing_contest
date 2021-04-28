/* sample input
2 700
600 200 200 400
900 800 400 500

2 8000
2000 730 280 90
1052 410 237 80

3 600
600 200 200 400
900 800 400 500
200 200 200 300
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n, x, a, b, c, d, ori, mi=10000000, ma=-10000000;
    cin >> n >> x;
    ori=x;

    // 処理定義
    rep(i, n){
        cin >> a >> b >> c >> d;
        int pay=b;
        x-=a;
        while(x>=0){
            pay+=d;
            x-=c;
        }
        mi=min(pay, mi);
        ma=max(pay, ma);
        x=ori;
    }

    // 出力定義
    cout << mi << " " << ma << endl;
    return 0;
}

/* 参考回答

*/