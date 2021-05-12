/* sample input
3 3 0 0
..*
...
***

10 10 5 5
.*.******.
..........
**********
..........
..........
..........
*.*.*.*.*.
..........
..........
.........*
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    vector<string> bd(h);

    // 入力
    rep(i, h) cin >> bd[i];

    // 処理

    // (y, x)を*に変更
    bd[y][x]='*';
    
    // 横列が*で挟まれているかチェックし、挟まれていたらその座標を*に変更
    // 座標右側
    for(int i=x+1; i<w; i++){
        if(bd[y][i]=='*'){
            for(int j=x+1; j<i; j++){
                bd[y][j]='*';
            }
            break;
        }
    }

    // 座標左側
    for(int i=x-1; i>=0; i--){
        if(bd[y][i]=='*'){
            for(int j=x-1; j>i; j--){
                bd[y][j]='*';
            }
            break;
        }
    }

    // 縦列が*で挟まれているかチェックし、挟まれていたらその座標を*に変更
    // 座標上側
    for(int i=y+1; i<w; i++){
        if(bd[i][x]=='*'){
            for(int j=y+1; j<i; j++){
                bd[j][x]='*';
            }
            break;
        }
    }

    // 座標下側
    for(int i=y-1; i>=0; i--){
        if(bd[i][x]=='*'){
            for(int j=y-1; j>i; j--){
                bd[j][x]='*';
            }
            break;
        }
    }

    // 出力
    // cout << endl;
    rep(i, h) cout << bd[i] << endl;
}

/* 参考回答
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int H,W,Y,X;
    cin >> H >> W >> Y >> X;
    vector<string> S(H);

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = -1; i <= 1; i += 2){
        for (int j = 1; ; j++){

            if(Y+(i*j) == -1 || Y+(i*j) == H){
                break;
            }

            if(S[Y+(i*j)][X] == '*'){
                for (int k = min(Y+(i*j),Y); k <= max(Y+(i*j),Y); k++){
                    S[k][X] = '*';
                }
                break;
            }
        }
    }

    for (int i = -1; i <= 1; i += 2){
        for (int j = 1; ; j++){

            if(X+(i*j) == -1 || X+(i*j) == W){
                break;
            }

            if(S[Y][X+(i*j)] == '*'){
                for (int k = min(X+i*j,X); k <= max(X+i*j,X); k++){
                    S[Y][k] = '*';
                }
                break;
            }
        }
    }

    S[Y][X] = '*';

    for(int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}
*/