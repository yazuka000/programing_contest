/* sample input
3 3
!.*
...
*.*

5 5
*.*.*
.....
*#!.*
...#*
*.***
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    bool out=false;
    cin >> h >> w;
    vector<string> bd(h);
    
    // 入力
    rep(i, h){
        cin >> bd[i];
    }

    // 処理

    // !のある座標を*に変え、その座標を取得
    rep(i, h){
        rep(j, w){
            if(bd[i][j]=='!'){
                bd[i][j]='*';
                y=i;
                x=j;
                out=true;
                break;
            }
        }
        if(out) break;
    }

    // 斜め判定
    // for (int i = -1; i <= 1; i += 2)によって、一つのループで正負の値の両方を全探索できる
    for (int i =-1; i<=1; i+=2){

        for (int j=1; ; j++){

            // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
            if(x+(i*j)==-1 || x+(i*j)==w || y+(i*j)==-1 || y+(i*j)==h || bd[y+(i*j)][x+(i*j)]=='#'){
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

    // 斜め判定
    // for (int i = -1; i <= 1; i += 2)によって、一つのループで正負の値の両方を全探索できる
    for (int i=-1; i<=1; i+=2){
        for (int j=1; ; j++){

            // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
            if(x+(i*j)==-1 || x+(i*j)==w || y-(i*j)==-1 || y-(i*j)==h || bd[y-(i*j)][x+(i*j)]=='#'){
                break;
            }

            if(bd[y-(i*j)][x+(i*j)]=='*'){
                for(int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                    bd[y+x-k][k]='*';
                }
                break;
            }
        }
    }

    // 縦の判定
    for (int i=-1; i<=1; i+=2){
        for (int j=1; ; j++){

            // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
            if(y+(i*j)==-1 || y+(i*j)==h || bd[y+(i*j)][x]=='#'){
                break;
            }

            if(bd[y+(i*j)][x]=='*'){
                for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                    bd[k][x] = '*';
                }
                break;
            }
        }
    }

    // 横の判定
    for (int i=-1; i<=1; i+=2){
        for (int j = 1; ; j++){

            // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
            if(x+(i*j)==-1 || x+(i*j)==w || bd[y][x+(i*j)]=='#'){
                break;
            }

            if(bd[y][x+(i*j)]=='*'){
                for (int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                    bd[y][k] = '*';
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
