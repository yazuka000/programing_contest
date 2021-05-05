/* sample input
4 8 2

0 5 1

9 9 2

1 1000000000000000000 3
*/

/* 実装方針
a 以上 b 以下の整数のうち条件を満たすものの個数を求める問題です.

このような問題では， f(n) := 0 以上 n 以下の整数のうち条件を満たすものの個数と定義しておくと，
答えは f (b) − f (a − 1) で求まるので楽です.

ただし，a = 0 のときに f (−1) が呼ばれる ことに注意してください.
このことに注意すると，f は次のように書けます.
ただし，/ は切り捨ての除算です.

f(n) ={n/x+1 (n≥0)
        0 (n = −1)
*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    unsigned long long a, b, x, count=0;
    cin >> a >> b >> x;

    // cout << a << b << x << endl;

    // 処理
    // 最大値bをxで割った値から、最小値aをxで割った値を引くことで、
    // 「aからbの間にある、xで割り切れる整数の数」を求められる
    count=b/x - a/x;

    // ただし、aがxできれいに割れる(余りが0)場合は、
    // 上記の「xで割り切れる値」のカウントに「0」の分である1カウントを追加する
    if(a%x==0){
        count++;
    }

    // 出力
    cout << count << endl;
}

/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    unsigned long long a, b, x, count=0;
    cin >> a >> b >> x;

    // cout << a << b << x << endl;

    // 処理
    if(a%x==0){
        count++;
    }

    if(b!=a){
        count+=(b-a)/x;
    }
    

    // 出力
    cout << count << endl;
}
*/