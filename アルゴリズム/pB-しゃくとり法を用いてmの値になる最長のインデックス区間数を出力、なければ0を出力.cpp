/* sample input
1 10
11

10 27
16 9 2 6 18 3 1 3 6 8

1 10
10
*/

/* 実装方針
区間の前と後ろを全探索すると計算量が O(N^2) になって実行時間制限に間に合わなくなってしまいます。
そこで しゃくとり法 というアルゴリズムを用います。

しゃくとり法についてはこのpaiza開発日誌の過去の記事に詳しく書いてあるので参照してみてください。
今回の問題では、区間の末尾と先頭の更新条件は次の通りになります。
・末尾++ : 区間の総和が M を超えたとき
・先頭++ : 区間の総和が M 以下のとき

前問と異なり、最大の区間を求めたいので、条件を満たす時にはさらに良い答えを出すために区間を伸ばし、
条件を満たさないときには区間を縮めるというしゃくとり法になります。
しゃくとり法は、アルゴリズムの理解以上に実装が難しくバグを埋め込みやすいので、何度か書いて慣れてみてください。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, m, sum=0, ans=0, l=0, u=0;
    cin >> n >> m;
    vector<long long int> a(n);

    // 入力
    rep(i, n) cin >> a[i];

    // 処理

    // しゃくとり法
    sum += a[0];

    while(1){
        if(m < sum){
            sum -= a[l];
            l++;
        }else{
            u++;
            ans = max(ans, u-l);
            if(u == n){
                break;
            }else{
                sum+=a[u];
            }
        }
    }

    // 出力
    cout << ans << endl;
}


/* 参考回答
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int N,M,sum = 0, ans = 0, l = 0, u = 0;
    cin >> N >> M;
    vector<long long int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sum += A[0];

    while(1){
        if(M < sum){
            sum -= A[l];
            l++;
        }else{
            u++;
            ans = max(ans,u-l);
            if(u == N){
                break;
            }else{
                sum += A[u];
            }
        }
    }

    cout << ans << endl;
}
*/