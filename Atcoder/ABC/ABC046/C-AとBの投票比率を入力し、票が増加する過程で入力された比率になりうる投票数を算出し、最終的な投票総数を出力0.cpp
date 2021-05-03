/* sample input
3
2 3
1 1
3 2

4
1 1
1 1
1 5
1 100

5
3 10
48 17
31 199
231 23
3 2
*/

/* 実装方針
各途中状態で、できるだけ投票数が少ない方がよいです (投票数を増やすのはいつでも出来るので)。

今高橋 君に A 票、青木君に B 票入っていて、次に満たすべき比率が x : y だとすると、
A ≤ nx ∧ B ≤ ny なるような最小の自然数 n を取れば、

次にあり得る最小の得票数は nx, ny であることがわかります。

このような n は max(⌈A/x⌉, ⌈B/y⌉) で計算できます。

はじめに A = 1, B = 1 として、これを N 回繰り返すことで O(N ) で答えが得られます。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, t, a, A=1, B=1, nn, ans=0;
    cin >> n;

    // cout << A << " " << B << endl;

    // 入力
    rep(i, n){
        cin >> t >> a;

        // 下の式で-1する理由は、AとBにはそれぞれ初期値として1が与えられており、
        // その値を差し引いてから計算しないと、余分な1が足されてしまい、正しい値が出せないからである
        nn=max((A+t-1)/t, (B+a-1)/a);
        // nn=max((A+t)/t, (B+a)/a);

        A=nn*t;
        B=nn*a;

        // cout << A << " " << B << endl;
    }

    ans=A+B;

    // 出力
    cout << ans << endl;
}

/* 参考回答
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main() {
	int n; 
	cin >> n; 
	
	vector <ll> x(n), y(n); 
	
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i]; 
	
	ll a = 1, b = 1; 
	for (int i = 0; i < n; i++) {
		ll k = max((a + x[i] - 1) / x[i], (b + y[i] - 1) / y[i]); 
		
		a = k * x[i], b = k * y[i];  
	}
	
	cout << a + b; 
}


*/