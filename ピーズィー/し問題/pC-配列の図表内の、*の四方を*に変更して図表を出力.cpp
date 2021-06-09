/* sample input
3 3
...
.*.
...

10 10
*.........
..........
..........
..........
..........
..........
..........
..........
..........
..........
*/

/* 実装方針
入力

*を認識する
認識した*の四方を*にする
座標外は除く

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
                if(0<=i-1){
                    bdout[i-1][j]='*';
                }
                if(i+1<h){
                    bdout[i+1][j]='*';
                }
                if(0<=j-1){
                    bdout[i][j-1]='*';
                }
                if(j+1<h){
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

/* 参考回答
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int H,W;
    bool out = false; 
    cin >> H >> W;
    vector<string> S(H);

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(S[i][j] == '*'){
                S[max(i-1,0)][j] = '*';
                S[min(i+1,H-1)][j] = '*';
                S[i][max(j-1,0)] = '*';
                S[i][min(j+1,W-1)] = '*';
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}
*/