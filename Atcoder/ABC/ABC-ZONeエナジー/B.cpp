/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, D, H, ufo;
    cin >> n >> D >> H;

    int d[n], h[n];

    // 入力
    for(int i=0; i<n; i++){
        cin >> d[i] >> h[i];
    }

    // 処理
    ufo=D*H;

    // 出力
    // cout << a << endl;
}

/* 参考回答
#include <iostream>
using namespace std;
void chmax(double& a, double b){ if(a < b) a = b; }

int main(){
    int N;
    double D, H, ans = 0;
    cin >> N >> D >> H;
    while(N--){
        double d, h;
        cin >> d >> h;
        chmax(ans, h - d * (H - h) / (D - d));
    }
    cout << ans << endl;
}


*/