/* sample input
10 10 4 5 3
.......#..
..........
..........
#.........
..........
......#...
..........
....#.....
...#......
..........
L 3
R 1
R 3
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char direct[4] = {'N','E','S','W'};
int dcount = 0, sx, sy, H, W;
bool stop = false;

// 処理関数
void move(char D, char M, int l, vector<string>& MP){
    int LR=1, add=1;

    MP[sy][sx] = '*';

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
            stop = true;
            break;
        }

        MP[sy][sx]='*'; 

    }
    dcount += add;
}

int main() {
    // 初期値定義
    int n, go;
    char lr;
    cin >> H >> W >> sy >> sx >> n;
    vector<string> bd(H);

    rep(i, H){
        cin >> bd[i];
    }

    // 処理定義
    rep(i, n){
        cin >> lr >> go;
        move(direct[dcount%4], lr, go, bd);
        if(stop){
            break;
        }
    }

    // 出力定義
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
bool stop = false;

void move(char D, char M, int l, vector<string>& MP){
    int LR = 1,add = 1;
    
    MP[sy][sx] = '*';

    if(M == 'L'){
        LR = -1;
        add = 3;
    }

    for (int i = 0; i < l; i++){
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
            stop = true;
            break;
        }

        MP[sy][sx] = '*';
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
            break;
        }
    }

    for (int i = 0; i < H; i++){
        cout << mp[i] << endl;
    }
}
*/