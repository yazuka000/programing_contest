/* sample input
7 3 2 1 5
..#
...
...
...
..#
.#.
##.
L
L
L
L
L
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int x=0, y=0, nowx=x, nowy=y;

void move(char lr){
   if(x < nowx){ // 左向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            y++;
        } else {
            y--;
        }
    }else if(x > nowx){ // 右向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            y--;
        } else {
            y++;
        }
    }else if(nowy < y){ // 下向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            x++;
        } else {
            x--;
        }
    }else{ // 上向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){ 
            x--;
        } else {
            x++;
        }
    }
}


int main() {
    // 初期値定義
    int h, w, n;
    cin >> h >> w >> y >> x >> n;
    char lr;
    vector<string> bd(h);

    rep(i, h){
        cin >> bd[i];
    }

    // 処理定義
    nowx=x;
    nowy=y;

    rep(i, n){
        cin >> lr;
        move(lr);

        // 出力定義
        if(0 <= y && y <= h && 0 <= x && x <= w && bd[y][x] != '#'){
            cout << y << " " << x << endl;
        } else {
            cout << "Stop" << endl;
            break;
        }
    }
    return 0;
}



/* 別回答
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char direct[4] = {'N','E','S','W'};
int dcount = 0,sx,sy;

void move(char D, char M){
    int LR = 1,add = 1;

    if(M == 'L'){
        LR = -1;
        add = 3;
    }

    if(D == 'N'){
        sx += LR;
    }else if(D == 'S'){
        sx -= LR;
    }else if(D == 'E'){
        sy += LR;
    }else{
        sy -= LR;
    }
    
    dcount += add;
}

int main(){
    int H,W,N;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

    for (int i = 0; i < N; i++){
        char m;
        cin >> m;
        move(direct[dcount%4],m);
        if(0 <= sx && sx < W && 0 <= sy && sy < H && mp[sy][sx] != '#'){
            cout << sy << " "<< sx << endl;
        }else{
            cout << "Stop" << endl;
            break;
        }
    }
}
*/