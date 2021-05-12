/* sample input
3 3 0 0
10 10 5 5
*/
#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    cin >> h >> w >> y >> x;

    // h * wで全探索し、iがxと、jがyと等しかったら!、一方だけ等しかったら*、それ以外は.を出力
    rep(i, h){
        rep(j, w){
            if(i==y && j==x){
                cout << '!';
            }else if(i==y || j==x){
                cout << '*';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }
}

/* 参考回答

*/


/* 参考回答
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int H,W,Y,X;
    cin >> H >> W >> Y >> X;

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(i == Y && j == X){
                cout << '!';
            }else if(i == Y || j == X){
                cout << '*';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }
}

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    bool out=false;

    // 入力
    // 図表を全て'.'で初期化
    vector<vector<char>> bd(h, vector<char>(w, '.'));

    // bd(y, x)を'!'にし、四方の延長線上全てを'*'に変える
    rep(i, h){
        rep(j, w){
            if(i==y && j==x){
                bd[i][j]='!';
                for(int k=-1; k>=0; k--) bd[i+k][j]='*';
                for(int k=1; k<h; k++) bd[i+k][j]='*';
                for(int k=-1; k>=0; k--) bd[i][j+k]='*';
                for(int k=1; k<w; k++) bd[i][j+k]='*';
                out=true;
                break;
            }
        }

        if(out) break;
    }

    // 出力
    rep(i, h){
        rep(j, w){
            cout << bd[i][j];
        }
        cout << endl;
    }
}
*/