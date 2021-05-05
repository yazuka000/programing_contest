/* sample input
3 3
2 2 2

6 1
1 6 1 2 0 4

5 9
3 1 4 1 5

2 0
5 5
*/

/* 実装方針
各 1 ≤ i ≤ N −1 について ai +ai+1 ≤ x となるように，
a の各要素を (非負整数の範囲で) 減らしていき ます.
最後に，元の a と比べることで操作回数が分かります.
この操作回数を最小化することを目指します.

まず，a1 > x ならば a1 = x としておきます.
次に，i = 1,2,...,N − 1 の順に ai + ai+1 ≤ x を成立させ ていきます.
とりあえず，最初から ai + ai+1 ≤ x ならば何もする必要はありません.
ai + ai+1 > x ならば， ai + ai+1 = x となるまで ai と ai+1 を減らさなければなりませんが，
このとき ai+1 だけを減らすのが最適 であることが分かります.
なぜならば，これから各 j > i について aj + aj+1 ≤ x を成立させていくときに，
ai+1 が小さいほど操作回数が少なくなることが期待できるからです.

 以上の貪欲法により正しく答えを求めることができます.なお，オーバーフローに注意してください.
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    // 初期値
    ll n, x, count=0;
    cin >> n >> x;
    vector<ll> a(n);

    // 入力
    rep(i, n) cin >> a[i];
    
    // 処理

    // 最初の値であるa[0]は、直接xと比較し、x以上だった場合
    if(a[0]>=x){
        // countに(a[0]-x)した値を足す
        count += a[0]-x;

        // a[0]にxを代入
        a[0]=x;
    }

    for(int i = 1; i < n; i++){
        // xからa[i-1]に入っている値を引いた値を、okvに格納
        int okv = x-a[i-1];

        // a[i]がokvより大きかった場合、
        if(a[i] > okv){
            // countに(a[i]-okv)した値を格納
            count += a[i] - okv;

            // a[i]にokvを代入
            a[i] = okv;
        }
    }

    // 出力
    cout << count << endl;
}

/* 参考回答
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int n,x;
    cin >> n >> x;

    vector<int> a(n);

    rep(i,n)cin >> a[i];

    ll ans = 0;

    if(a[0] >= x){
        ans += a[0] - x;
        a[0] = x;
    }

    for(int i = 1; i < n; i++){
        int okv = x - a[i - 1];
        if(a[i] > okv){
            ans += a[i] - okv;
            a[i] = okv;
        }
    }

    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
    // 初期値
    ll n, x, count=0;
    cin >> n >> x;
    vector<ll> a(n);

    // 入力
    rep(i, n) cin >> a[i];
    
    // 処理
    for(ll i=0; i<n; i++){
        ll sum=a[i]+a[i+1];

        if(sum > x){
            if(a[i]>a[i+1]){
                while(a[i]+a[i+1]!=x){
                    a[i]--;
                    count++;
                }
            }else{
                while(a[i]+a[i+1]!=x){
                    a[i+1]--;
                    count++;
                }
            }
        }
    }

    // 出力
    cout << count << endl;
}
*/