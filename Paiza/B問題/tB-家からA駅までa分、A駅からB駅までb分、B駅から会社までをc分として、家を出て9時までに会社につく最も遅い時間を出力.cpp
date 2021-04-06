/* sample input
30 30 10
3
6 0
7 0
8 0

// 8:59までにつく
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int a, b, c, n, h, m, ma=-10000000;
    cin >> a >> b >> c;
    cin >> n;

    int time=b+c;
    int limit=9*60;

    // 処理定義
    rep(i, n){
        cin >> h >> m;
        int b_go=h*60+m;
        if(limit > b_go+time){
            ma=max(ma, b_go+time);
        }
    }

    int go=ma-(a+b+c);

    int hh=go/60;
    int mm=go%60;

    // 出力定義
    if(hh < 10 && mm < 10){
        cout << '0' << hh << ":" << '0' << mm << endl;
    }else if(hh < 10){
        cout << '0' << hh << ":" << mm << endl;
    }else if(mm < 10){
        cout << hh << ":" << '0' << mm << endl;
    }else {
        cout << hh << ":" << mm << endl;
    }    
    return 0;
}

/* 参考回答

*/