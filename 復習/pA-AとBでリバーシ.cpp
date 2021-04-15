/* sample input
3 3 2
...
...
.#.
0 0
2 0
0 2
2 2

5 5 3
....#
.....
.....
.....
.#...
0 0
4 0
2 2
4 2
3 4
1 1
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, n, y, x;
    char ab[2] = {'A','B'};
    cin >> h >> w >> n;
    vector<string> bd(h);
    
    // 入力
    rep(i, h) cin >> bd[i];   
    
    // 処理

    for(int l=0; l<n*2; l++){
        cin >> y >> x;

        bd[y][x]=ab[l%2];
        
        // 斜め判定
        for (int i =-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x+(i*j)==-1 || x+(i*j)==w || y+(i*j)==-1 || y+(i*j)==h || bd[y+(i*j)][x+(i*j)]=='#'){
                    break;
                }

                if(bd[y+(i*j)][x+(i*j)]==ab[l%2]){
                    for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                        bd[k][k-y+x]=ab[l%2];
                    }
                    break;
                }

            }
        }

        // 斜め判定
        for (int i=-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x+(i*j)==-1 || x+(i*j)==w || y-(i*j)==-1 || y-(i*j)==h || bd[y-(i*j)][x+(i*j)]=='#'){
                    break;
                }

                if(bd[y-(i*j)][x+(i*j)]==ab[l%2]){
                    for(int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                        bd[y+x-k][k]=ab[l%2];
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

                if(bd[y+(i*j)][x]==ab[l%2]){
                    for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                        bd[k][x] = ab[l%2];
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

                if(bd[y][x+(i*j)]==ab[l%2]){
                    for (int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                        bd[y][k] = ab[l%2];
                    }
                    break;
                }
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
    int H,W,N,Y,X;
    cin >> H >> W >> N; 
    vector<string> S(H);
    char ms[2] = {'A','B'};

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int h = 0; h < N*2; h++){

        cin >> Y >> X;

        for (int i = -1; i <= 1; i += 2){
            for (int j = 1; ; j++){
                if(Y+(i*j) == -1 || Y+(i*j) == H || S[Y+(i*j)][X] == '#'){
                    break;
                }

                if(S[Y+(i*j)][X] == ms[h%2]){
                    for (int k = min(Y+(i*j),Y); k <= max(Y+(i*j),Y); k++){
                        S[k][X] = ms[h%2];
                    }
                    break;
                }
            }
        }

        for (int i = -1; i <= 1; i += 2){
            for (int j = 1; ; j++){

                if(X+(i*j) == -1 || X+(i*j) == W || S[Y][X+(i*j)] == '#'){
                    break;
                }

                if(S[Y][X+(i*j)] == ms[h%2]){
                    for (int k = min(X+i*j,X); k <= max(X+i*j,X); k++){
                        S[Y][k] = ms[h%2];
                    }
                    break;
                }
            }
        }

        for (int i = -1; i <= 1; i += 2){
            for (int j = 1; ; j++){

                if(X+(i*j) == -1 || X+(i*j) == W || Y+(i*j) == -1 || Y+(i*j) == H || S[Y+(i*j)][X+(i*j)] == '#'){
                    break;
                }

                if(S[Y+(i*j)][X+(i*j)] == ms[h%2]){
                    for (int k = min(Y+(i*j),Y); k <= max(Y+(i*j),Y); k++){
                        S[k][k-Y+X] = ms[h%2];
                    }
                    break;
                }
            }
        }

        for(int i = -1; i <= 1; i += 2){
            for (int j = 1; ; j++){

                if(X+(i*j) == -1 || X+(i*j) == W || Y-(i*j) == -1 || Y-(i*j) == H || S[Y-(i*j)][X+(i*j)] == '#'){
                    break;
                }

                if(S[Y-(i*j)][X+(i*j)] == ms[h%2]){
                    for (int k = min(X+i*j,X); k <= max(X+i*j,X); k++){
                        S[Y+X-k][k] = ms[h%2];
                    }
                    break;
                }
            }
        }

        S[Y][X] = ms[h%2];

    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
}


#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, n, y, x;
    char ms[2] = {'A','B'};
    cin >> h >> w >> n;
    vector<string> bd(h);
    vector<int> ya(n);
    vector<int> xa(n);
    vector<int> yb(n);
    vector<int> xb(n);
    
    // 入力
    rep(i, h) cin >> bd[i];   
    
    rep(i, n){
        cin >> ya[i] >> xa[i];
        cin >> yb[i] >> xb[i];
    } 
    
    // 処理

    for(int l=0; l<n*2; l++){
        if(l%2!=0){
            y=ya[l/2];
            x=xa[l/2];
            bd[y][x]='A';
        }else{
            y=yb[l/2];
            x=xb[l/2];
            bd[y][x]='B';
        }
        

        // 斜め判定
        for (int i =-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x+(i*j)<0 || x+(i*j)>w || y+(i*j)<0 || y+(i*j)>h || bd[y+(i*j)][x+(i*j)]=='#'){
                    break;
                }

                if(l%2!=0){
                    if(bd[y+(i*j)][x+(i*j)]=='A'){
                        for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                            bd[k][k-y+x]='A';
                        }
                        break;
                    }
                }else{
                    if(bd[y+(i*j)][x+(i*j)] == 'B'){
                        for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                            bd[k][k-y+x]='B';
                        }
                        break;
                    }
                }
            }
        }

        // 斜め判定
        for (int i=-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x+(i*j)<0 || x+(i*j)>w || y-(i*j)<0 || y-(i*j)>h || bd[y-(i*j)][x+(i*j)]=='#'){
                    break;
                }

                if(l%2!=0){
                    if(bd[y-(i*j)][x+(i*j)]=='A'){
                        for(int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                            bd[y+x-k][k]='A';
                        }
                        break;
                    }
                }else{
                    if(bd[y-(i*j)][x+(i*j)]=='B'){
                        for(int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                            bd[y+x-k][k]='B';
                        }
                        break;
                    }
                }
            }
        }

        // 縦の判定
        for (int i=-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(y+(i*j)<0 || y+(i*j)>h || bd[y+(i*j)][x]=='#'){
                    break;
                }

                if(l%2!=0){
                    if(bd[y+(i*j)][x]=='A'){
                        for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                            bd[k][x] = 'A';
                        }
                        break;
                    }
                }else{
                    if(bd[y+(i*j)][x]=='B'){
                        for (int k=min(y+(i*j), y); k<=max(y+(i*j), y); k++){
                            bd[k][x] = 'B';
                        }
                        break;
                    }
                }
            }
        }

        // 横の判定
        for (int i=-1; i<=1; i+=2){
            for (int j = 1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x+(i*j)<0 || x+(i*j)>w || bd[y][x+(i*j)]=='#'){
                    break;
                }

                if(l%2!=0){
                    if(bd[y][x+(i*j)]=='A'){
                        for (int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                            bd[y][k] = 'A';
                        }
                        break;
                    }
                }else{
                    if(bd[y][x+(i*j)]=='B'){
                        for (int k=min(x+i*j, x); k<=max(x+i*j, x); k++){
                            bd[y][k] = 'B';
                        }
                        break;
                    }
                }
            }
        }
    }

    // 出力
    rep(i, h){
        cout << bd[i] << endl;
    }
}
*/