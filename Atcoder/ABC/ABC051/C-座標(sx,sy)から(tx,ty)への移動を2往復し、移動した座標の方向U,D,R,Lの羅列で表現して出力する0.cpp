/* sample input
0 0 1 2

-2 -2 1 1
*/

/* 実装方針 ABC051
まず、点 s = (sx , sy ) から点 t = (tx , ty ) への経路について考えます。
問題文の条件より、点 s と点 t を除いた全 ての格子点で交わらない 4 つの経路を見つける必要があります。

この条件から、図 1 で示すような点 s = (sx , sy ) と点 t = (tx , ty ) 
のそれぞれ上下左右に距離 1 進んだ点は必ず訪れる必要があります。
そうでなければ、先に述べ た 4 つの経路の条件に反してしまうからです。

次に、図 1 で示した点 s の周辺の 4 点から点 t の周辺の 
4 点への交差しない 4 つの経路を見つけることを考え ます。
このとき、図 2 のような 4 つの経路を見つけることができ、これらの経路は全て最短距離になっています。
なぜなら、s の周辺の 4 点から t の周辺の 4 点へ結ぶ移動は右移動と上移動で行えるからです。
あとは、4 つの経 路を合体させ、s → t → s → t → s と移動するような文字列を出力すれば良いです。

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    // 処理
    for(int i=0;i<tx-sx;i++) cout << "R";
    for(int i=0;i<ty-sy;i++) cout << "U";
    for(int i=0;i<tx-sx;i++) cout << "L";
    for(int i=0;i<ty-sy;i++) cout << "D";

    cout << "L";

    for(int i=0;i<ty-sy+1;i++) cout << "U";
    for(int i=0;i<tx-sx+1;i++) cout << "R";

    cout << "D";
    cout << "R";

    for(int i=0;i<ty-sy+1;i++) cout << "D";
    for(int i=0;i<tx-sx+1;i++) cout << "L";

    cout << "U" << endl;

}

/* 参考回答
#include <bits/stdc++.h>
using namespace std;

#define DEBUG
void dbg(){
#ifdef DEBUG
#endif
}

int main()
{
    int sx,sy,tx,ty;
    
    cin >> sx >> sy >> tx >> ty;

    for(int i=0;i<tx-sx;i++) cout << "R";
    for(int i=0;i<ty-sy;i++) cout << "U";
    for(int i=0;i<tx-sx;i++) cout << "L";
    for(int i=0;i<ty-sy;i++) cout << "D";
    cout << "L";
    for(int i=0;i<ty-sy+1;i++) cout << "U";
    for(int i=0;i<tx-sx+1;i++) cout << "R";
    cout << "D";
    cout << "R";
    for(int i=0;i<ty-sy+1;i++) cout << "D";
    for(int i=0;i<tx-sx+1;i++) cout << "L";
    cout << "U";

};


*/