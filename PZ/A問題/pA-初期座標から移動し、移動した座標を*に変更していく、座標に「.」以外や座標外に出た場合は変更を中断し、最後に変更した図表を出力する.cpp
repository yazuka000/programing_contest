/* sample input
5 5 3 1 3
.....
.....
.....
.....
.....
2 R
4 R
6 R

18 39 12 1 20
........................#...........#..
.......................................
.......................................
.........#........#..#.........#.......
.............................#.......#.
.......................................
...................................#...
......................................#
...................#...................
.......................................
....................................#..
.......................#.....#.....#...
..............................#........
....#..............#.....#......#......
.......................................
.....#.................................
...#..................#................
......#............................#.#.
3 R
8 R
13 L
16 R
19 L
21 L
30 R
32 L
37 R
40 L
42 R
48 R
62 R
73 R
77 R
79 R
83 L
84 R
94 R
99 L
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// グローバル初期値
char direct[4] = {'N','E','S','W'};
int dcount = 0, sx, sy, H, W;

// 処理関数
void move(char D, char M){
    int LR=1, add=1;

    if(M =='S'){
        if(D == 'N'){
        sy--;
        }else if(D == 'S'){
        sy++;
        }else if(D == 'E'){
        sx++;
        }else{
        sx--;
        }

    }else{
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
}

int main(){
    // 初期値
    int n, mcount=0;

    // 入力
    cin >> H >> W >> sy >> sx >> n;
    vector<string> bd(H);
    vector<pair<int, char>> td(n);

    rep(i, H){
        cin >> bd[i];
    }

    rep(i, n){
        cin >> td[i].first >> td[i].second;
    }

    // 処理
    bd[sy][sx] ='*';

    rep(i, 100){
        if(i==td[mcount].first){
            move(direct[dcount%4], td[mcount].second);
            mcount++;
        } else {
            move(direct[dcount%4], 'S');
        }

        if(0<=sy && sy<H && 0<=sx && sx<W && bd[sy][sx]=='.'){
            bd[sy][sx]='*';
        } else {
            break;
        }
    }

    // 出力
    rep(i, H){
        cout << bd[i] << endl;
    }

    return 0;
}


/* 参考回答
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char direct[4] = {'N','E','S','W'};
int dcount = 0,sx,sy,H,W;

void move(char D, char M){
    int LR = 1,add = 1;

    if(M == 'S'){
        if(D == 'N'){
        sy--;
        }else if(D == 'S'){
        sy++;
        }else if(D == 'E'){
        sx++;
        }else{
        sx--;
        }
    }else{
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
}

int main(){
    int N,mcount = 0;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);
    vector<pair<int,char> > td(N);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

    mp[sy][sx] = '*';

    for (int i = 0; i < N; i++){
        cin >> td[i].first >> td[i].second;
    }

    for (int i = 0; i < 100; i++){
        if(i == td[mcount].first){
            move(direct[dcount%4],td[mcount].second);
            mcount++;
        }else{
            move(direct[dcount%4],'S');
        }

        if(0 <= sx && sx < W && 0 <= sy && sy < H && mp[sy][sx] != '#' && mp[sy][sx] != '*'){
            mp[sy][sx] = '*';
        }else{
            break;
        }
    }

    for (int i = 0; i < H; i++){
        cout << mp[i] << endl;
    }
}
*/