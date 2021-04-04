/* sample input
7 9 6 0 S R
..#.#..##
..#..#...
#.......#
#.#...###
#.##....#
.....#...
..##..#.#
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int y=0, x=0;

void move(char w, char m){
    if(w=='N'){
        if(m=='L'){
                x--;
            } else {
                x++;
            }
    }else if(w=='E'){
        if(m=='L'){
                y--;
            } else {
                y++;
            }
    }else if(w=='W'){
        if(m=='L'){
                y++;
            } else {
                y--;
            }
    }else{
        if(m=='L'){
                x++;
            } else {
                x--;
            }
    }
}

int main() {
    // 初期値定義
    int h, w, sy, sx;
    char d, m;
    cin >> h >> w >> sy >> sx >> d >> m;
    vector<string> bd(h);

    rep(i, h){
        cin >> bd[i];
    }

    // 処理定義
    move(d, m);

    // 出力定義
    if(0 <= sy+y && sy+y<h && 0 <= sx+x && sx+x<w && bd[sy+y][sx+x] != '#'){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

/* 参考回答

*/

    /*
    switch(w){
        case 'N':
            if(m=='L'){
                x--;
            } else {
                x++;
            }
            break;
        case 'E':
            if(m=='L'){
                y--;
            } else {
                y++;
            }
            break;
        case 'W':
            if(m=='L'){
                y++;
            } else {
                y--;
            }
            break;
        case 'S':
            if(m=='L'){
                x++;
            } else {
                x--;
            }
            break;
    }
    */