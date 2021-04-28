/* sample input
5 5 2 2
*.*.*
.....
*...*
.....
*.*.*
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
    rep(i, h){
        cin >> bd[i];
    }

    bd[y][x]='*';

    // 処理
    // 斜め判定
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

    // 縦の判定
    for (int i=-1; i<=1; i+=2){
        for (int j=1; ; j++){

            if(y+(i*j)==-1 || y+(i*j)==h){
                break;
            }

            if(bd[y+(i*j)][x] == '*'){
                for (int k = min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                    bd[k][x] = '*';
                }
                break;
            }
        }
    }

    // 横の判定
    for (int i=-1; i<=1; i+=2){
        for (int j = 1; ; j++){

            if(x+(i*j)==-1 || x+(i*j)==w){
                break;
            }

            if(bd[y][x+(i*j)] == '*'){
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

/* 参考回答
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
    // 斜め判定
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
    rep(i, h){
        cout << bd[i] << endl;
    }
}
*/