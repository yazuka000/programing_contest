/* sample input
6 6
......
...#..
..#*#.
......
......
......
*/

/* 実装方針
入力

*を認識する
認識した*の四方を*にする
座標外は除く
#があった場合は除く

出力
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w;
    cin >> h >> w;
    vector<string> bdin(h);
    vector<string> bdout(h);

    // 入力
    rep(i, h){
        cin >> bdin[i];
        bdout[i]=bdin[i];
    }

    // 処理
    rep(i, h){
        rep(j, w){
            if(bdin[i][j]=='*'){
                if(0<=i-1 && bdin[i-1][j]!='#'){
                    bdout[i-1][j]='*';
                }
                if(i+1<h && bdin[i+1][j]!='#'){
                    bdout[i+1][j]='*';
                }
                if(0<=j-1 && bdin[i][j-1]!='#'){
                    bdout[i][j-1]='*';
                }
                if(j+1<h && bdin[i][j+1]!='#'){
                    bdout[i][j+1]='*';
                }
            }
        }
    }

    // 出力
    rep(i, h){
        cout << bdout[i] << endl;
    }
}