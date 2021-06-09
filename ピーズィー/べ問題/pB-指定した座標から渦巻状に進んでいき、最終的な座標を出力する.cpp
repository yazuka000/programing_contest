/* sample input
38 47 27
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 関数定義やmainの処理で両方とも変数を使いたい場合はグローバル変数を定義する
char direct[4] = {'N','E','S','W'};
int x = 0,y = 0;

void move(char D){
    if(D == 'N'){
        y--;
    }else if(D == 'S'){
        y++;
    }else if(D == 'E'){
        x++;
    }else{
        x--;
    }
}

int main(){
    // lengthは移動できる残りマス、dは曲がった回数(最初に右に出る回数も含める)(direct[d%4]と指定することで、曲がる方向に紐付いたインデックス番号を指定する)
    // nowは次に曲がったときに移動できるマス数をlengthに再格納するための変数
    // この問題には「11223344...」の法則で、曲がってから直進できるマス数が増えていく規則性がある
    // そのため、2回曲がるごとに直進出来るマス数が増えていくプログラムを書く必要がある
    int sx,sy,N,length = 1,d = 1,now = 1;

    // firstを定義して、方向転換して最初の移動かどうかを判定する
    bool first = true;

    cin >> sx >> sy >> N;

    for (int i = 0; i < N; i++){
        move(direct[d%4]);

        // lengthで直進するマスの数をマイナスにカウントする
        length--;

        // 最初の移動ではなく、lengthが0になったとき(つまり2回曲がった上でlengthが0になったとき)
        if(!first && length == 0){
            first = true;
            now++;
            length = now;
            d++;
        
        // 最初の移動ではないが、lengthが0になったとき
        }else if(length == 0){
            length = now;
            first = false;
            d++;
        }
    }

    // リアルタイムで足し算していかなくても、最後にまとめて一回計算すれば答えを出力できる
    cout << sx+x << " " << sy+y << endl;
}

/* 参考回答
#include <iostream>

using namespace std;

char direct[4] = {'N','E','S','W'};
int x = 0,y = 0;

void move(char D){
    if(D == 'N'){
        y--;
    }else if(D == 'S'){
        y++;
    }else if(D == 'E'){
        x++;
    }else{
        x--;
    }
}

int main(){
    int sx,sy,N,length = 1,d = 1,now = 1;
    bool first = true;
    cin >> sx >> sy >> N;

    for (int i = 0; i < N; i++){
        move(direct[d%4]);
        length--;
        if(!first && length == 0){
            first = true;
            now++;
            length = now;
            d++;
        }else if(length == 0){
            length = now;
            first = false;
            d++;
        }
    }

    cout << sx+x << " " << sy+y << endl;
}
*/