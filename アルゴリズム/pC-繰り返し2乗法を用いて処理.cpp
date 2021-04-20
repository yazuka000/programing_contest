/* sample input
0

10

1083757

1000000000000
*/

/* 実装方針
素直に * 2 を繰り返し行おうとすると、最大 10^12 回ループが回ることになってしまい、 実行制限時間に間に合いません。

そこで、 繰り返し二乗法 というアルゴリズムを使います。
このアルゴリズムは、 「2 ^ N を、 2 ^ (2 ^ i) 乗を用いて表す」ことで計算量を O(logN) に落とすアルゴリズムです。

まず N の ２ 進数表現を考えます。Nの最下位の桁が １ かどうかを確認します。

最下位の桁が １ の場合、 2 の i 乗である pow を ans にかけます。

この処理が終わったら、pow を pow の ２ 乗に置き換え、N を右に １ ビットシフト(割る 2)します。

これを繰り返すことで、i 回目のときに、2 ^ i のかけ算を行うことができます。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    long long int N, n, w=1000003, ans = 1, pow = 2;
    cin >> N;
    n = N;

    while(0 < N){
        // Nの最下位の桁が1だった場合、ansとpowをかけた値をwで割ってansに格納
        if(N&1){
            ans = (ans*pow)%w;
        }

        // ループの数だけ2を累乗し、wで割った余りをpowに格納
        pow = (pow*pow)%w;
        N >>= 1;
    }

    cout << ans << endl;
}


/* 参考回答
#include <iostream>

using namespace std;

#define MOD 1000003;

int main(){
    long long int N,n,ans = 1, pow = 2;
    cin >> N;
    n = N;

    while(0 < N){
        if(N&1){
            ans = (ans*pow)%MOD;
        }
        pow = (pow*pow)%MOD;
        N >>= 1;
    }

    cout << ans << endl;
}

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int w=1000003, n, o, ans;

    // 入力
    cin >> n;

    // 処理
    o=pow(2, n);
    ans=o%w;

    // 出力
    cout << ans << endl;
}
*/