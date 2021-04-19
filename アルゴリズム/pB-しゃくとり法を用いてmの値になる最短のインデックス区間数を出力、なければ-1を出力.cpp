/* sample input
1 10
9

10 27
16 9 2 6 18 3 1 3 6 8

1 10
10
*/

/* 実装方針
区間の前と後ろを全探索すると計算量がO(N^2)になって実行時間制限に間に合わなくなってしまいます。
そこで しゃくとり法 というアルゴリズムを用います。

しゃくとり法についてはこのpaiza開発日誌の過去の記事に詳しく書いてあるので参照してみてください。
しゃくとり法の概要は次の通りです。

・条件を満たすような区間を保持したまま、区間がより短く（長く）なるように操作する。
・更新した区間が条件を満たしている時は答えとなる可能性があるので、答えの候補と比較する。
・条件を満たしていない場合は区間を長く（短く）する。
・これらの操作を繰り返し、これ以上区間を移動できなくなったら、終了する。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, m, sum=0, ans=1e9, l=0, u=0;
    cin >> n >> m;
    vector<long long int> a(n);

    // 入力
    rep(i, n) cin >> a[i];

    // 処理
    sum += a[0];

    // しゃくとり法
    while(1){
        if(m <= sum){
            sum -= a[l];
            ans = min(ans, u-l+1);
            l++;
        }else{
            u++;
            if(u == n){
                break;
            }else{
                sum+=a[u];
            }
        }
    }

    // 出力
    if(ans==1e9){
        cout << -1 << endl; 
    }else{
        cout << ans << endl;
    }
}


/* 参考回答
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int N,M,sum = 0, ans = 1e9, l = 0, u = 0;
    cin >> N >> M;
    vector<long long int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sum += A[0];

    while(1){
        if(M <= sum){
            sum -= A[l];
            ans = min(ans,u-l+1);
            l++;
        }else{
            u++;
            if(u == N){
                break;
            }else{
                sum += A[u];
            }
        }
    }

    if(ans == 1e9){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}
*/