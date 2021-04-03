/* sample input
O.O.X
OXX.X
O.X.X
OO..X
X.XOX

O.OOO
OO.OX
O.O.O
XXXO.
OOXXO
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int win(int o, int x){
    if(o==5){
        cout << 'O' << endl;
    }else if(x==5){
        cout << 'X' << endl;
    }
    return 0;
}


int main() {
    // 初期値定義
    int o, x;
    vector<string> bd(5);

    rep(i, 5){
        cin >> bd[i];
    }

    // 処理定義
    rep(i, 5){
        if(bd[i] == "OOOOO"){
            cout << 'O' << endl;
            return 0;
        }else if(bd[i] == "XXXXX"){
            cout << 'X' << endl;
            return 0;
        }
    }


    for(int i=0; i<5; i++){
        o=0, x=0; 
        for(int j=0; j<5; j++){
            if(bd[j][i]=='O'){
                o++;
            }else if(bd[j][i]=='X'){
                x++;
            }
        }
        if(o==5 || x==5){
            win(o, x);
            return 0;
        }
    }
    
    
    o=0, x=0;    
    for(int i=4; i>=0; i--){
        if(bd[i][4-i]=='O'){
            o++;
        }else if(bd[i][4-i]=='X'){
            x++;
        }
    }
    if(o==5 || x==5){
        win(o, x);
        return 0;
    }


    o=0, x=0;   
    for(int i=0; i<5; i++){
        if(bd[i][i]=='O'){
            o++;
        }else if(bd[i][i]=='X'){
            x++;
        }
    }
    if(o==5 || x==5){
        win(o, x);
        return 0;
    }

    cout << 'D' << endl;
    return 0;
}



/* 参考回答
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> board(5);
    for (int i = 0; i < 5; ++i) {
        cin >> board[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (board[i] == "OOOOO") {
            cout << "O" << endl;
            return 0;
        } else if (board[i] == "XXXXX") {
            cout << "X" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 5; ++i) {
        int o = 0, x = 0;
        for (int j = 0; j < 5; ++j) {
            if (board[j][i] == 'O') {
                o++;
            } else if (board[j][i] == 'X') {
                x++;
            }
        }
        if (o == 5) {
            cout << "O" << endl;
            return 0;
        } else if (x == 5) {
            cout << "X" << endl;
            return 0;
        }
    }

    int o = 0, x = 0;
    for (int i = 0; i < 5; ++i) {
        if (board[i][i] == 'O') {
            o++;
        } else if (board[i][i] == 'X') {
            x++;
        }
    }
    if (o == 5) {
        cout << "O" << endl;
        return 0;
    } else if (x == 5) {
        cout << "X" << endl;
        return 0;
    }
    o = 0;
    x = 0;
    for (int i = 0; i < 5; ++i) {
        if (board[i][4-i] == 'O') {
            o++;
        } else if (board[i][4-i] == 'X') {
            x++;
        }
    }
    if (o == 5) {
        cout << "O" << endl;
        return 0;
    } else if (x == 5) {
        cout << "X" << endl;
        return 0;
    }
    cout << "D" << endl;
}
*/

