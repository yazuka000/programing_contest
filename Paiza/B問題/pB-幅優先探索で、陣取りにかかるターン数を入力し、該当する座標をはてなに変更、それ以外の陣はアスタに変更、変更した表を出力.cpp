/* sample input
3 3 2
*..
...
...
1
3

10 10 5
##*#####..
..........
.#.#......
##..#.....
#########.
..........
..........
##########
..........
..........
1
4
5
7
9

2 2 3
*.
..
0
1
2
*/
/*

*/
/* 実装方針
入力

・*を全探索する
・*を見つけたら、認識した座標のi,j,0をqueueに入力する
・全探索のループを抜ける

幅優先探索
・探索内で使う変数としてQに含まれる3つの値を、x, y, nに代入する
・入力ターン数に0が含まれていた場合、初期位置の座標の*を?に変える
・queueに入力された座標四方が.で、座標外ではなかった場合、*に変える
・変えた場所が*になるのにかかるターン数が、入力されたターン数と等しかった場合、その座標を?に変える
・座標情報をqueueに入力していく
・queueに含まれた座標の四方全てを総当りで3の処理を行い、queueに格納された座標の値がなくなるまで繰り返す

出力
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, num, ex[50];
    cin >> h >> w >> num;
    vector<string> bd(h);
    bool out=false;
    tuple<int,int,int> T;
    queue<tuple<int, int, int>> Q;

    // 入力
    rep(i, h) cin >>bd[i];
    
    rep(i, num) cin >> ex[i];

    // 処理
    rep(i, h){
        rep(j, w){
            if(bd[i][j]=='*'){
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

        rep(i, num){
            if(ex[i]==0){
                bd[y][x]='?';
            }
        }

        for(int i=-1; i<=1; i+=2){

            if(0<=y+i && y+i<h && bd[y+i][x]=='.'){
                bd[y+i][x]='*';
                rep(j, num){
                    if(ex[j]==n+1){
                        bd[y+i][x]='?';
                    }
                }
                Q.emplace(y+i, x, n+1);
            }

            if(0<=x+i && x+i<w && bd[y][x+i]=='.'){
                bd[y][x+i]='*';
                rep(j, num){
                    if(ex[j]==n+1){
                        bd[y][x+i]='?';
                    }
                }
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
#include <algorithm>

using namespace std;

int main(){
    int H,W,N,Lnum = 0;
    bool out = false; 
    cin >> H >> W >> N;
    vector<string> S(H);
    vector<long long int> L(N+1);
    tuple<int,int,int> T;
    queue<tuple<int,int,int> > Q;

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < N; i++){
        cin >> L[i];
    }

    L[N] = 1e9;

    sort(L.begin(),L.end());

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(S[i][j] == '*'){
                Q.emplace(i,j,0);
                if(L[Lnum] == 0){
                    S[i][j] = '?';
                }else{
                    S[i][j] = '*';
                }
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

        if(L[Lnum] <= n){
            Lnum++;
        }

        for (int i = -1; i <= 1; i += 2){
        
            if(0 <= y+i && y+i < H && S[y+i][x] == '.'){
                if(n+1 == L[Lnum]){
                    S[y+i][x] = '?';
                }else{
                    S[y+i][x] = '*';
                }
                Q.emplace(y+i,x,n+1);
            }

            if(0 <= x+i && x+i < W && S[y][x+i] == '.'){
                if(n+1 == L[Lnum]){
                    S[y][x+i] = '?';
                }else{
                    S[y][x+i] = '*';
                }
                Q.emplace(y,x+i,n+1);
            }
        }
    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}
*/