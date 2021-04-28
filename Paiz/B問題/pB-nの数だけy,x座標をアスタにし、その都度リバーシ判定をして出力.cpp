/* sample input
3 3 1
..*
...
*.*
0 0

18 18 10
.........*........
....*..*..*.#.#..#
......**.#........
..#.....#.........
...#..............
.*..........*....*
#.................
...*.............#
..#.......*.......
..................
......*..........*
#.........*.......
.#..............*.
..........*....*#.
.#................
......#...........
.........#..#.....
..........#..*....
13 1
17 8
0 0
0 17
8 17
15 15
10 10
17 17
9 15
5 5
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w, n;
    cin >> h >> w >> n;
    vector<string> bd(h);
    vector<int> y(n);
    vector<int> x(n);
    
    // 入力
    rep(i, h) cin >> bd[i];    
    rep(i, n) cin >> y[i] >> x[i];
    
    // 処理

    // 斜め判定
    rep(l, n){
        bd[y[l]][x[l]]='*';

        for (int i =-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x[l]+(i*j)==-1 || x[l]+(i*j)==w || y[l]+(i*j)==-1 || y[l]+(i*j)==h || bd[y[l]+(i*j)][x[l]+(i*j)]=='#'){
                    break;
                }

                if(bd[y[l]+(i*j)][x[l]+(i*j)] == '*'){
                    for (int k=min(y[l]+(i*j), y[l]); k<=max(y[l]+(i*j), y[l]); k++){
                        bd[k][k-y[l]+x[l]]='*';
                    }
                    break;
                }
            }
        }

        // 斜め判定
        for (int i=-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x[l]+(i*j)==-1 || x[l]+(i*j)==w || y[l]-(i*j)==-1 || y[l]-(i*j)==h || bd[y[l]-(i*j)][x[l]+(i*j)]=='#'){
                    break;
                }

                if(bd[y[l]-(i*j)][x[l]+(i*j)]=='*'){
                    for(int k=min(x[l]+i*j, x[l]); k<=max(x[l]+i*j, x[l]); k++){
                        bd[y[l]+x[l]-k][k]='*';
                    }
                    break;
                }
            }
        }

        // 縦の判定
        for (int i=-1; i<=1; i+=2){
            for (int j=1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(y[l]+(i*j)==-1 || y[l]+(i*j)==h || bd[y[l]+(i*j)][x[l]]=='#'){
                    break;
                }

                if(bd[y[l]+(i*j)][x[l]]=='*'){
                    for (int k=min(y[l]+(i*j), y[l]); k<=max(y[l]+(i*j), y[l]); k++){
                        bd[k][x[l]] = '*';
                    }
                    break;
                }
            }
        }

        // 横の判定
        for (int i=-1; i<=1; i+=2){
            for (int j = 1; ; j++){

                // xとyが座標外に出てしまった場合と座標に#があったとき、ループを抜ける
                if(x[l]+(i*j)==-1 || x[l]+(i*j)==w || bd[y[l]][x[l]+(i*j)]=='#'){
                    break;
                }

                if(bd[y[l]][x[l]+(i*j)]=='*'){
                    for (int k=min(x[l]+i*j, x[l]); k<=max(x[l]+i*j, x[l]); k++){
                        bd[y[l]][k] = '*';
                    }
                    break;
                }
            }
        }
    }

    // 出力
    rep(i, h){
        cout << bd[i] << endl;
    }
}

/* 参考回答

*/