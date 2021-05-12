/* sample input
3 3
*.#
..#
##.
*/

/* 実装方針
S. 入力

1. *を全探索する
2. *を見つけたら、認識した座標のx,yをqueueに入力する
3. 全探索のループを抜ける

幅優先探索
4. queueに入力された座標四方が.で、座標外ではなかった場合、*に変えていき、その座標をqueueに入力していく
5. queueに含まれた座標の四方全てを総当りで3の処理を行い、queueに格納された座標の値がなくなるまで繰り返す

G. 出力
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w;
    cin >> h >> w;
    vector<string>bd(h);
    bool out=false;
    pair<int, int> P;
    queue<pair<int, int>> Q;

    // 入力
    rep(i, h){
        cin >>bd[i];
    }

    // 処理
    rep(i, h){
        rep(j, w){
            if(bd[i][j]=='*'){
                Q.push(make_pair(i,j));
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    while(!Q.empty()){
        P=Q.front();
        Q.pop();

        int y=P.first, x=P.second;

        for(int i=-1; i<=1; i+=2){
            if(0<=y+i && y+i<h && bd[y+i][x]=='.'){
                bd[y+i][x]='*';
                Q.push(make_pair(y+i, x));
            }

            if(0<=x+i && x+i<w && bd[y][x+i]=='.'){
                bd[y][x+i]='*';
                Q.push(make_pair(y, x+i));
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
#include <utility>
#include <string>

using namespace std;

int main(){
    int H,W;
    bool out = false; 
    cin >> H >> W;
    vector<string> S(H);
    pair<int,int> P;
    queue<pair<int,int> > Q;

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(S[i][j] == '*'){
                Q.push(make_pair(i,j));
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    while(!Q.empty()){      //queueの中身が空でない限りwhileループを回す
        P = Q.front();      //pairの変数Pに、queue Qの先頭の要素を代入する。
        Q.pop();            //上の行で代入した、queue Qの先頭要素を消去する。

        int y=P.first,x=P.second;       //扱いやすいようにPに入っているマスの情報をy,xに直す。

        for(int i=-1;i<=1;i+=2){                                //ここから注目しているマスに隣接しているマスを調べる
            if(S[y+i][x]=='.' && 0<=y+i && y+i<H){              //範囲内かつ、まだ陣地になっていないかを判定
                S[y+i][x] = '*';                                //まだ陣地になっていなかった場合、Sを書き換えて陣地にする
                Q.push(make_pair(y+i,x));                       //新しく陣地にしたマスをqueue Qに入れる
            }

            if(S[y][x+i]=='.' && 0<=x+i && x+i<W){              //範囲内かつ、まだ陣地になっていないかを判定
                S[y][x+i] = '*';                                //まだ陣地になっていなかった場合、Sを書き換えて陣地にする
                Q.push(make_pair(y,x+i));                       //新しく陣地にしたマスをqueue Qに入れる
            }
        }
    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}
*/