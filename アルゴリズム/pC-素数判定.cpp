/* sample input
2147483647

1
*/

/* 実装方針
素数の定義は、 「１とその数以外の約数を持たないような数」 です。
しかし、次のように 2 から N までの数を全て調べるとループが最大で 10 ^ 10 回ってしまい、 実行時間制限に間に合いません。 

しかし、実は調べるのは Nの0.5乗（ルートN） まででいいです。

なぜかというと、 N に 1 と N 以外の約数があると仮定した場合、
少なくとも 1 つは N の 0.5 乗（ルート N ） 以下の約数があることになるからです。
なお、N = 1 のときはこの判定法が使えないので注意してください。

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    unsigned long N;
    cin >> N;

    for (int i = 2; i*i <= N; i++){
        if(N%i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    if(N == 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}


/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n % 2 == 0 || n % 3 == 0) return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i = 5; i * i <= n; i += 6) {
        if(n % i     == 0) return false; // (6の倍数)-1
        if(n % (i+2) == 0) return false; // (6の倍数)+1
    }

    return true;
}

int main(){
    // 初期値
    int n;

    // 入力
    cin >> n;

    // 処理・出力
    if(is_prime(n)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
*/