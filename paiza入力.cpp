/* sample input
3 3 1 1 E
..#
..#
...

9 2 4 0 S
#.
#.
..
##
..
..
.#
..
.#
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int h, w, sx, sy;
    char m;
    cin >> h >> w >> sy >> sx >> m;
    vector<string> bd(h);

    rep(i, h){
        cin >> bd[i];
    }

   // 処理定義

    switch(m){
        case 'N':
            sy--;
            break;
        case 'S':
            sy++;
            break;
        case 'W':
            sx--;
            break;
        case 'E':
            sx++;
            break;
    }

    
    // 出力
    if(0 <= sx && sx < w && 0 <= sy && sy < h && bd[sy][sx] != '#'){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

/* 参考回答
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sx,sy;

void move(char D){
    if(D == 'N'){
        sy--;
    }else if(D == 'S'){
        sy++;
    }else if(D == 'E'){
        sx++;
    }else{
        sx--;
    }
}

int main(){
    int H,W;
    char m;
    cin >> H >> W >> sy >> sx >> m;
    vector<string> S(H);

    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    move(m);

    if(0 <= sx && sx < W && 0 <= sy && sy < H && S[sy][sx] != '#'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
*/