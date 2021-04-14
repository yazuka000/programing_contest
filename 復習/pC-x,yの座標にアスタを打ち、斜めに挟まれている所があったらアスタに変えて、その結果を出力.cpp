/* sample input
15 15 1 7
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............
...............

10 10 4 4
**********
*........*
*.******.*
*.*....*.*
*.*....*.*
*.*....*.*
*.*....*.*
*.*....*.*
*.******.*
**********
*/

/* 実装方針
石を置いたマスから
右上方向(y 座標を +j, x 座標を +j)、
右下方向(y 座標を -j, x 座標を +j)、
左上方向(y 座標を +j, x 座標を -j)、
左下方向(y 座標を -j, x 座標を -j)
に自分の石があるかどうかを探索していき、自分の石があった場合は探索を打ち切り、間のマスを繰り返しを用いて自分の石で埋めます。

自分の石が見つからなかったときはマップの端で探索を打ち切ることに注意してください。
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
    rep(i, h){
        cin >> bd[i];
    }

    bd[y][x]='*';

    // 処理

    // for (int i = -1; i <= 1; i += 2)によって、一つのループで正負の値の両方を全探索できる
    for (int i =-1; i<=1; i+=2){

        for (int j=1; ; j++){

            // xとyが座標外に出てしまった場合、ループを抜ける
            if(x+(i*j)==-1 || x+(i*j)==w || y+(i*j)==-1 || y+(i*j)==h){
                break;
            }

            if(bd[y+(i*j)][x+(i*j)] == '*'){
                for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                    bd[k][k-y+x]='*';
                }
                break;
            }
        }
    }

    // for (int i = -1; i <= 1; i += 2)によって、一つのループで正負の値の両方を全探索できる
    for (int i=-1; i<=1; i+=2){
        for (int j=1; ; j++){

            // xとyが座標外に出てしまった場合、ループを抜ける
            if(x+(i*j)==-1 || x+(i*j)==w || y-(i*j)==-1 || y-(i*j)==h){
                break;
            }

            if(bd[y-(i*j)][x+(i*j)] == '*'){
                for(int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                    bd[y+x-k][k]='*';
                }
                break;
            }
        }
    }

    // 出力
    rep(i, h){
        cout << bd[i] << endl;
    }
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

            if(X+(i*j) == -1 || X+(i*j) == W || Y+(i*j) == -1 || Y+(i*j) == H){
                break;
            }

            if(S[Y+(i*j)][X+(i*j)] == '*'){
                for (int k = min(Y+(i*j),Y); k <= max(Y+(i*j),Y); k++){
                    S[k][k-Y+X] = '*';
                }
                break;
            }
        }
    }

    for (int i = -1; i <= 1; i += 2){
        for (int j = 1; ; j++){

            if(X+(i*j) == -1 || X+(i*j) == W || Y-(i*j) == -1 || Y-(i*j) == H){
                break;
            }

            if(S[Y-(i*j)][X+(i*j)] == '*'){
                for(int k = min(X+i*j,X); k <= max(X+i*j,X); k++){
                    S[Y+X-k][k] = '*';
                }
                break;
            }
        }
    }

    S[Y][X] = '*';

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}



#include <iostream>

using namespace std;

int main(){
    int H,W,Y,X;
    cin >> H >> W >> Y >> X;

    for (int i = 0;i < H; i++){
        for (int j = 0; j < W; j++){
            if(i == Y && j == X){
                cout << '!';
            }else if(abs(i-Y) == abs(j-X)){
                cout << '*';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }
}


#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    vector<vector<char>> bd(h, vector<char>(w, '.')); 

    // 入力
    bd[y][x]='!';

    // 処理

    // 右下
    for(int i=1; y+i<h && x+i<w; i++){
        bd[y+i][x+i]='*';
    }

    // 右上
    for(int i=1; y-i>=0 && x+i<w; i++){
        bd[y-i][x+i]='*';
    }

    // 左上
    for(int i=1; y-1>=0 && x-i>=0; i++){
        bd[y-i][x-i]='*';
    }

    // 左下
    for(int i=1; y+i<h && x-i>=0; i++){
        bd[y+i][x-i]='*';
    }


    // 出力
    rep(i, h){
        rep(j, w){
            cout << bd[i][j];
        }
        cout << endl;
    }
}
*/