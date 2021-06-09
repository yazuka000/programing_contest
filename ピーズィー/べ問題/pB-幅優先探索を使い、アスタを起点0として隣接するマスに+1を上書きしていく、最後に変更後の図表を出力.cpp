/* sample input
3 3
*..
...
...
*/

/* 実装方針
S. 入力

1. *を全探索する
2. *を見つけたら、認識した座標のi,j,0をqueueに入力する
3. 全探索のループを抜ける

幅優先探索
4. 探索内で使う変数としてQに含まれる3つの値を、x, y, nに代入する
4. queueに入力された座標四方が.で、座標外ではなかった場合、'n+1'に変えていき、その座標情報をqueueに入力していく
5. queueに含まれた座標の四方全てを総当りで3の処理を行い、queueに格納された座標の値がなくなるまで繰り返す

G. 出力
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, count=0;
    cin >> h >> w;
    vector<string>bd(h);
    bool out=false;
    tuple<int,int,int> T;
    queue<tuple<int, int, int>> Q;

    // 入力
    rep(i, h){
        cin >>bd[i];
    }

    // 処理
    rep(i, h){
        rep(j, w){
            if(bd[i][j]=='*'){
                bd[i][j]='0';
                Q.emplace(i, j, 0);
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    while(!Q.empty()){
        T=Q.front();
        Q.pop();

        int y=get<0>(T), x=get<1>(T), n=get<2>(T);

        for(int i=-1; i<=1; i+=2){

            if(0<=y+i && y+i<h && bd[y+i][x]=='.'){
                bd[y+i][x]=n+1+'0';
                Q.emplace(y+i, x, n+1);
            }

            if(0<=x+i && x+i<w && bd[y][x+i]=='.'){
                bd[y][x+i]=n+1+'0';
                Q.emplace(y, x+i, n+1);
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
#include <queue>
#include <tuple>
#include <utility>
#include <string>

using namespace std;

int main(){
    int H,W;
    bool out = false; 
    cin >> H >> W;
    vector<string> S(H);
    tuple<int,int,int> T;
    queue<tuple<int,int,int> > Q;

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(S[i][j] == '*'){
                Q.emplace(i,j,0);
                S[i][j] = '0';
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    while(!Q.empty()){
        T = Q.front();
        Q.pop();
        int y = get<0>(T), x = get<1>(T), n = get<2>(T);

        for (int i = -1; i <= 1; i += 2){
            
            if(0 <= y+i && y+i < H && S[y+i][x] == '.'){
                S[y+i][x] = n+1+'0';
                Q.emplace(y+i,x,n+1);
            }

            if(0 <= x+i && x+i < W && S[y][x+i] == '.'){
                S[y][x+i] = n+1+'0';
                Q.emplace(y,x+i,n+1);
            }
        }
    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}
*/