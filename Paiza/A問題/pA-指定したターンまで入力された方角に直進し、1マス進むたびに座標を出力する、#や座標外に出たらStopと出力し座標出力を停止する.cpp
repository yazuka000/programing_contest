/* sample input
18 16 13 12 26
.....#...#......
.#........#.#...
................
#.......#.......
...........##.#.
......#.........
....#...........
................
..........#.....
......###.......
...............#
........#.#.....
................
.#....#.........
...........#...#
#.#.#...........
..#.............
................
1 R
2 R
7 R
9 L
30 L
33 R
34 R
39 R
40 L
41 L
45 L
46 L
51 R
52 R
53 R
57 L
61 L
62 R
63 R
64 R
70 R
75 R
83 R
84 R
93 R
97 R

10 10 5 5 22
........#.
..........
..........
..........
#.........
..........
..........
........#.
..........
..........
0 L
3 R
4 L
7 L
10 R
12 R
21 L
24 L
26 R
28 R
35 L
36 R
41 R
44 R
62 L
63 L
72 L
81 L
85 R
90 R
92 R
98 R
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char direct[4] = {'N','E','S','W'};
int dcount = 0, sx, sy, H, W;
bool stop = false;

// 処理関数
void move(char D, char M){
    int LR = 1,add = 1;

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

int main() {
    // 初期値定義
    int n, m, mcount=0;
    char lr;
    cin >> H >> W >> sy >> sx >> n;
    vector<string> bd(H);
    vector<pair<int, char>> td(n);

    rep(i, H){
        cin >> bd[i];
    }

    rep(i, n){
        cin >> td[i].first >> td[i].second;
    }

    // 処理定義
    rep(i, 100){
        if(i==td[mcount].first){
            move(direct[dcount%4], td[mcount].second);
            mcount++;
        } else {
            move(direct[dcount%4], 'S');
        }

        // 出力定義
        if(0<=sy && sy<H && 0<=sx && sx<W && bd[sy][sx]!='#'){
            cout << sy << " " << sx << endl;
        } else {
            cout << "Stop" << endl;
            break;
        }
    }
    return 0;
}

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char direct[4] = {'N','E','S','W'};
int dcount = 0,sx,sy,H,W;
bool stop = false;

void move(char D, char M){
    int LR = 1,add = 1;

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
    int N,mcount=0;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);
    vector<pair<int,char> > td(N);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

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

        if(0 <= sx && sx < W && 0 <= sy && sy < H && mp[sy][sx] != '#'){
            cout << sy << " " << sx << endl;
        }else{
            cout << "Stop" << endl;
            break;
        }
    }
}
*/


/*
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