/* sample input
3 3
B
A.B
...
...

3 3
A
A..
...
..B
*/

/* 実装方針
S. 入力



G. 出力
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, Acount=0, Bcount=0;
    char ab, f, s, win;
    cin >> h >> w;
    cin >> ab;

    vector<string> bd(h);
    bool out=false;
    tuple<int,int, char> T;
    queue<tuple<int, int, char>> Q;

    // 入力
    if(ab=='A'){
        f='A';
        s='B';
    }else{
        f='B';
        s='A';
    }

    rep(i, h) cin >>bd[i];

    // 処理

    // 先行のマークを見つけ、最初のキューに入れる
    rep(i, h){
        rep(j, w){
            if(bd[i][j]==f){
                Q.emplace(i, j, f);
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    // 後攻のマークを見つけ、2つ目のキューに入れる
    out=false;

    rep(i, h){
        rep(j, w){
            if(bd[i][j]==s){
                Q.emplace(i, j, s);
                out = true;
                break;
            }
        }

        if(out){
            break;
        }
    }

// キューが空になるまでループ
    while(!Q.empty()){
        T=Q.front();
        Q.pop();

        int y=get<0>(T), x=get<1>(T), ch=get<2>(T);

        for(int i=-1; i<=1; i+=2){
            if(0<=y+i && y+i<h && bd[y+i][x]=='.'){
                bd[y+i][x]=ch;
                Q.emplace(y+i, x, ch);
            }

            if(0<=x+i && x+i<w && bd[y][x+i]=='.'){
                bd[y][x+i]=ch;
                Q.emplace(y, x+i, ch);
            }
        }
    }

// キューの処理後に、変更後のAとBの数をそれぞれカウントする
    rep(i, h){
        rep(j, w){
            if(bd[i][j]=='A'){
                Acount++;
            }else if(bd[i][j]=='B'){
                Bcount++;
            }
        }
    }

// カウントの多い方を、winに代入
    if(Acount > Bcount){
        win='A';
    }else{
        win='B';
    }

    // 出力
    cout << Acount << " " << Bcount << endl;
    cout << win << endl;
}

    /*
    rep(i,h){
        cout << bd[i] << endl;
    }
    */


/* 別回答
#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <utility>
#include <string>

using namespace std;

int main(){
    int H,W,count = 0, aadd = 0, sums[2] = {1,1};
    string N;
    bool out = false, pass = true;
    cin >> H >> W;
    cin >> N;

    if(N == "B"){
        count++;
        aadd++;
    }

    vector<string> S(H);
    tuple<int,int,int> T;
    vector<queue<tuple<int,int,int> > > AB(2);

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S[i][j] == 'A'){
                AB[0].emplace(i,j,aadd);
                S[i][j] = '*';
            }else if(S[i][j] == 'B'){
                AB[1].emplace(i,j,0);
                S[i][j] = '*';
            }
        }
    }

    while(!AB[0].empty() || !AB[1].empty()){

        if(AB[count%2].empty()){
            count++;
            pass = false;
        }

        T = AB[count%2].front();
        int y = get<0>(T), x = get<1>(T), n = get<2>(T);

        if(count/2 < n && pass){
            count++;
            T = AB[count%2].front();
            y = get<0>(T), x = get<1>(T), n = get<2>(T);
        }

        AB[count%2].pop();

        for (int i = -1; i <= 1; i += 2){
        
            if(0 <= y+i && y+i < H && S[y+i][x] == '.'){
                S[y+i][x] = '*';
                sums[count%2]++;
                AB[count%2].emplace(y+i,x,n+1);
            }

            if(0 <= x+i && x+i < W && S[y][x+i] == '.'){
                S[y][x+i] = '*';
                sums[count%2]++;
                AB[count%2].emplace(y,x+i,n+1);
            }
        }
    }

    cout << sums[0] << " " << sums[1] << endl;

    if(sums[0] < sums[1]){
        cout << "B" << endl;
    }else if(sums[0] == sums[1]){
        cout << "Draw" << endl;
    }else{
        cout << "A" << endl;
    }
}
*/