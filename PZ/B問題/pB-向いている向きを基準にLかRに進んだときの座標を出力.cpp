/* sample input
6 9 E
R

-29 -13 W
L
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int y, x;

void move(char w, char m){
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
}

int main() {
    // 初期値定義
    char m, w;
    cin >> y >> x >> w;
    cin >> m;

    // 処理定義
    move(w, m);

    // 出力定義
    cout << y << " " << x << endl;
    return 0;
}

/* 参考回答
#include <iostream>

using namespace std;

int main(){
    int x,y,LR = 1;
    char D,d;
    cin >> y >> x >> D;
    cin >> d;

    if(d == 'R'){
        LR = -1;
    }

    if(D == 'N'){
        x -= LR;
    }else if(D == 'S'){
        x += LR;
    }else if(D == 'E'){
        y -= LR;
    }else{
        y += LR;
    }
    
    cout << y << " " << x << endl;
}
*/