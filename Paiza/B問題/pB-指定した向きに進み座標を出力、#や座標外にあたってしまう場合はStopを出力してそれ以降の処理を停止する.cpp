/* sample input
15 15 6 4 7
.......#.......
....#.......#.#
.......#.....#.
.......#.#...#.
#......#.......
#.........#....
..............#
..#...#....#..#
............#..
..#...##......#
##..#..#.#.....
#..............
............#..
...#...........
.#.........#.#.
L 4
L 3
R 4
R 5
L 3
L 2
R 1
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char direct[4] = {'N','E','S','W'};
int dcount = 0, sx, sy, H, W;
bool stop = false;

void move(char D, char M, int l, vector<string> MP){
    int LR=1, add=1, lx=sx, ly=sy;

    if(M == 'L'){
        LR = -1;
        add = 3;
    }

    for(int i=0; i<l; i++){
        if(D == 'N'){
            sx += LR;
        }else if(D == 'S'){
            sx -= LR;
        }else if(D == 'E'){
            sy += LR;
        }else{
            sy -= LR;
        }

        if(!(0 <= sx && sx < W && 0 <= sy && sy < H && MP[sy][sx] != '#')){
            cout << ly << " " << lx << endl;
            stop = true;
            break;
        }

        lx=sx;
        ly=sy;
    }
    dcount += add;
}

int main(){
    int N;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

    for (int i = 0; i < N; i++){
        char m;
        int l;
        cin >> m >> l;
        move(direct[dcount%4], m, l, mp);
        if(stop){
            cout << "Stop" << endl;
            break;
        }else{
            cout << sy << " " <<  sx << endl;
        }
    }
}

/*
#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int x=0, y=0, nowx=x, nowy=y;

void move(char lr, int move){
   if(x < nowx){ // 左向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            y+=move;
        } else {
            y-=move;
        }
    }else if(x > nowx){ // 右向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            y-=move;
        } else {
            y+=move;
        }
    }else if(nowy < y){ // 下向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){
            x+=move;
        } else {
            x-=move;
        }
    }else{ // 上向き
        nowy=y;
        nowx=x;
        if(lr == 'L'){ 
            x-=move;
        } else {
            x+=move;
        }
    }
}

int main() {
    // 初期値定義
    int h, w, sy, sx, n, m;
    char lr;
    cin >> h >> w >> sy >> sx >> n;
    vector<string> bd[h];

    rep(i, h){
        cin >> bd[i];
    }

    // 処理定義


    // 出力定義
    

    return 0;
}
*/

/* 参考回答
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char direct[4] = {'N','E','S','W'};
int dcount = 0,sx,sy,H,W;
bool stop = false;

void move(char D, char M, int l, vector<string> MP){
    int LR = 1,add = 1,lx = sx,ly = sy;

    if(M == 'L'){
        LR = -1;
        add = 3;
    }

    for(int i=0;i<l;i++){
        if(D == 'N'){
            sx += LR;
        }else if(D == 'S'){
            sx -= LR;
        }else if(D == 'E'){
            sy += LR;
        }else{
            sy -= LR;
        }

        if(!(0 <= sx && sx < W && 0 <= sy && sy < H && MP[sy][sx] != '#')){
            cout << ly << " " << lx << endl;
            stop = true;
            break;
        }

        lx=sx;
        ly=sy;
    }
    dcount += add;
}

int main(){
    int N;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

    for (int i = 0; i < N; i++){
        char m;
        int l;
        cin >> m >> l;
        move(direct[dcount%4],m,l,mp);
        if(stop){
            cout << "Stop" << endl;
            break;
        }else{
            cout << sy << " " <<  sx << endl;
        }
    }
}
*/