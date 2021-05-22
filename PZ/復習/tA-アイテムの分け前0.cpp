/* sample input
2 3

2 1

5 9
*/

/* 実装方針
報酬は 2N 個のアイテムであり、それぞれの価値は 1, 2, ..., 2N です。

・A 君と B 君はどちらも N 個のアイテムをもらう。
・A 君と B 君がそれぞれ貰うアイテムを小さい順に並べ、各アイテムごとの価値の差の絶対値を合計した値が K 以下になる。


答えは必ず偶数になる
条件に関わらず、全てのアイテム配分の通りは、2nの階乗になる

各絶対値は、必ず 「1 <= x <= n」になる
n > k の場合、組み合わせは存在せず、0になる

    // 初期値
    // a君とb君がそれぞれもらえるアイテム個数n個
    // アイテムの総数 2n個
    // もらったアイテムの価値を小さい順に並べて、小さい者同士で比較して「絶対値の合計の差」がk以下になるようにする

*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){

    int n, k;
    cin >> n >> k;

    float x=k-n;

    if(x < 0){
        cout << 0 << endl;
        return 0;
    }

    int y=x*ceil(x/2);

    int ans = x+y;

    cout << ans*ans << endl;
}

/* 参考回答

cout << x << " " << y << " " << ans << endl;

                cnt++;

                cout << i << " " << j << " " << " " << cnt << endl;

    for(int i=1; i<=n; i++){

        for(int j=n; j<=n*2; j++){
            // iとjが同値なら、その集回は飛ばす
            if(i==j) continue;

            // k-=abs(i-j);

            // i-jの絶対値が一つでもkを超えたらアウトなのでbreak
            if(abs(i-j)>=k || abs(i-j)>n) break;

            // if(abs(i-j)>=k) sub_cnt++;
            // i-jの絶対値をsumに加算していく
            // sum+=abs(i-j);

            cnt++;

            cout << i << " " << j << " " << cnt << endl;
        }

        // if(sum<=k) cnt++;
        // if(sub_cnt==n) cnt++;
    }

    cout << cnt << endl;


    for(int i=0; i<n; i++){
        
        for(int j=1; j<=n; j++){

            for(int k=n; k<=2*n; k++){

                sum+=abs(j-k);
            }
        }
    }

    for(int i=1; i<=n*2; i++){

        for(int j=1; j<=n*2; j++){
            // iとjが同値なら、その集回は飛ばす
            if(i==j) continue;

            // k-=abs(i-j);

            // i-jの絶対値が一つでもkを超えたらアウトなのでbreak
            if(abs(i-j)>=k || abs(i-j)>n) break;

            // if(abs(i-j)>=k) sub_cnt++;
            // i-jの絶対値をsumに加算していく
            // sum+=abs(i-j);

            cnt++;

            cout << i << " " << j << " " << cnt << endl;
        }

        // if(sum<=k) cnt++;
        // if(sub_cnt==n) cnt++;
    }
*/