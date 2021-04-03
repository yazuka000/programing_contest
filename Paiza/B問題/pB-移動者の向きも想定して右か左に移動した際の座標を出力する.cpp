/* sample input
3 5 1
L

-18 45 6
L
L
R
R
L
R
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int x, y, z, w, n;
    cin >> x >> y >> n;
    z=x, w=y;

    // 処理定義
    rep(i, n){        
        char way;
        cin >> way;

        if(x < z){ // 左向き
            w=y;
            z=x;
            if(way == 'L'){
                y++;
            } else {
                y--;
            }
        }else if(x > z){ // 右向き
            w=y;
            z=x;
            if(way == 'L'){
                y--;
            } else {
                y++;
            }
        }else if(w < y){ // 下向き
            w=y;
            z=x;
            if(way == 'L'){
                x++;
            } else {
                x--;
            }

        }else{ // 上向き
            w=y;
            z=x;
            if(way == 'L'){ 
                x--;
            } else {
                x++;
            }
        }
        // 出力定義
        cout << x << " " << y << endl;
    }
    return 0;            
}


/* 別回答
#include <iostream>

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
        dcount += add;
    }else if(D == 'S'){
        sx -= LR;
        dcount += add;
    }else if(D == 'E'){
        sy += LR;
        dcount += add;
    }else{
        sy -= LR;
        dcount += add;
    }
}

int main(){
    int N;
    cin >> sx >> sy >> N;

    for (int i = 0; i < N; i++){
        char m;
        cin >> m;
        move(direct[dcount%4],m);
        cout << sx << " " << sy << endl;
    }
}
*/