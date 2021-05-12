/* sample input
3 3 0 0
10 10 5 5
*/

/* 実装方針
石を置くマスの座標を (Y, X) とすると、
石を置いたマスを通る斜めのマス (y, x) の満たす条件は、
(y == Y + j || x == X + j) || (y == Y - j || x == X + j) です。
ただし、(y == Y && x == X) のときは、石を置いたマスなので注意が必要です。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    vector<vector<char>> bd(h, vector<char>(w, '.')); 

    // 入力・処理
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if(i==y && j==x){
                bd[i][j]='!';
            }else if(abs(i-y) == abs(j-x)){
                bd[i][j]='*';
            }
        }
    }

    // 出力
    rep(i, h){
        rep(j, w){
            cout << bd[i][j];
        }
        cout << endl;
    }
}

/* 参考回答
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