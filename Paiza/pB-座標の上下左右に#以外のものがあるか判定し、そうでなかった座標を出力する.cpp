/* sample input
10 10
##########
..........
##########
##########
..........
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
..........
*/

// 条件に該当しない座標の方を判定し、それ以外の座標を出力するという考え方

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int H, W;
    int move[2] = {-1,1};
    cin >> H >> W;
    vector<string> S(H); 

    rep(i, H){
        cin >> S[i];
    }

    rep(i, H){
        rep(j, W){
            // デフォルトでokにtrueを格納する
            bool ok = true;
            // {-1, 1}を格納した配列moveを使って、座標の前後左右の要素を指定している
            for (int k = 0; k < 2; k++){
                // 縦の判定、1つでも#じゃなければokにfalseを格納
                if(0 <= i+move[k] && i+move[k] < H && S[i+move[k]][j] != '#'){
                    ok = false;
                    break;
                }
                // 横の判定、1つでも#じゃなければokにfalseを格納
                if(0 <= j+move[k] && j+move[k] < W && S[i][j+move[k]] != '#'){
                    ok = false;
                    break;
                }
            }
            // okにtrueが格納されていた場合、下記の出力を実行する
            if(ok){
                cout << i << " " << j << endl;
            }
        }
    }
}

/* 総当たりの解き方

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int a, b;    
    cin >> a >> b;
    char bd[a];

    rep(i, a){
        cin >> bd[i];
    }

    // 処理・出力定義
    rep(i, a){
        rep(j, b){
            if(i==0 && j==0 && bd[i+1][j]=='#' && bd[i][j+1]=='#'){ // 左上角の判定
                cout << i << " " << j << endl;
            } else if(i==0 && j==b-1 && bd[i-1][j]=='#' && bd[i][j-1]=='#'){ // 右上角の判定
                cout << i << " " << j << endl;
            } else if(i==a-1 && j==0 && bd[i-1][j]=='#' && bd[i][j+1]=='#'){ // 左下角の判定
                cout << i << " " << j << endl;
            } else if(i==a-1 && j==b-1 && bd[i-1][j]=='#' && bd[i][j-1]=='#'){ // 右下角の判定
                cout << i << " " << j << endl;
            } else if(i==0 && bd[i+1][j]=='#' && bd[i][j+1]=='#' && bd[i][j-1]=='#'){ // 上端の判定
                cout << i << " " << j << endl;
            } else if(i==a-1 && bd[i-1][j]=='#' && bd[i][j+1]=='#' && bd[i][j-1]=='#'){ // 下端の判定
                cout << i << " " << j << endl;
            } else if(j==0 && bd[i+1][j]=='#' && bd[i-1][j]=='#' && bd[i][j+1]=='#'){ // 左端の判定
                cout << i << " " << j << endl;
            } else if(j==b-1 && bd[i+1][j]=='#' && bd[i-1][j]=='#' && bd[i][j-1]=='#'){ // 右端の判定
                cout << i << " " << j << endl;
            }else if(bd[i-1][j]=='#' && bd[i+1][j]=='#' && bd[i][j-1]=='#' && bd[i][j+1]=='#'){ // それ以外の判定
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}
*/

/* 参考回答
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int H,W;
    int move[2] = {-1,1};
    cin >> H >> W;
    vector<string> S(H); 

    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){

            bool ok = true;
            for (int k = 0; k < 2; k++){
                if(0 <= i+move[k] && i+move[k] < H && S[i+move[k]][j] != '#'){
                    ok = false;
                    break;
                }
                if(0 <= j+move[k] && j+move[k] < W && S[i][j+move[k]] != '#'){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << i << " " << j << endl;
            }
        }
    }
}
*/