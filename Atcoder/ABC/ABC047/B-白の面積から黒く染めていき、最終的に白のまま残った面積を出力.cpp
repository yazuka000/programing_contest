/* sample input
5 4 2
2 1 1
3 3 4

5 4 3
2 1 1
3 3 4
1 4 2

10 10 5
1 6 1
4 1 3
6 9 4
9 4 2
3 1 3
*/

/* 実装方針
ひとつの方法は、長方形に対応した W × H 要素の二次元配列 A[x][y] を用意して、塗りつぶしをシミュ レーションすることである。
はじめ、全ての要素を 0 などに初期化しておき、黒く塗った場所を 1 に変えていく。
最後に残った 0 の個数を数えれば、それがそのまま答えの面積となる。

もうひとつの方法は、長方形内の白い部分は存在すれば長方形になっていることを利用するものである。
白い長方形の左下の座標と右上の座標 (最初は (0, 0) と (W, H ))を持っておき、
たとえば x < xi をみたす領域 を黒く塗るときは「左下の x 座標が xi より小さければ xi に置き換える」とすればよい。

後者の方法のほうが効率よく処理ができるが、この問題の制約下ではどちらの方法を用いても時間的には問題ない。
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    ll w, h, n, men;
    cin >> w >> h >> n;
    vector<ll> x(n), y(n), a(n);

    ll maxx=0, minx=w, maxy=0, miny=h;

    // 入力
    rep(i, n) cin >> x[i] >> y[i] >> a[i];

    // 処理
    rep(i, n){
        if(a[i]==1){
            maxx=max(maxx, x[i]);
        }else if(a[i]==2){
            minx=min(minx, x[i]);
        }else if(a[i]==3){
            maxy=max(maxy, y[i]);
        }else{
            miny=min(miny, y[i]);
        }
    }

    // maxやmin関数は、比較対象同士が同じ変数型でないとエラーになる
    // そのため、ただの0をll型として定義している
    men=max((ll)0, minx-maxx) * max((ll)0, miny-maxy);

    // 出力
    cout << men << endl;
}

/* 参考回答
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
typedef long long ll;

#define rep(i, init, end) for(ll i = init; i < end; i++)
#define REP(i, init, end) for(ll i = init; i < end + 1; i++)
#define rev(i, end, init) for(ll i = init - 1; i >= end; i--)
#define REV(i, end, init) for(ll i = init; i >= end; i--)
#define PI 3.14159265359
#define EPS 0.0000000001
#define MOD 1000000007
#define INF 100000000000000000
// #define MAX 100000000000
//cout << std::fixed << std::setprecision(15) << y << endl;


int main(){
    ll W, H, N;
    cin >> W >> H >> N;

    ll l = 0, r = W, b = 0, t = H;
    ll x, y, a;
    rep(i, 0, N){
        cin >> x >> y >> a;
        if(a == 1){
            l = max(l, x);
        }else if(a == 2){
            r = min(r, x);
        }else if(a == 3){
            b = max(b, y);
        }else{
            t = min(t, y);
        }
    }

    cout << (max((ll)0, r - l) * max((ll)0, t - b)) << endl;

    return 0;
}
*/