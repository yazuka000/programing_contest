/* sample input
10
0 1 2 3 4 5 6 7 8 9
5
0 1
0 4
3 8
2 9
1 3

1
100
1
0 0
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, sum_cnt, x, y, total;
    cin >> n;
    vector<int> a(n);

    // 入力
    rep(i, n) cin >> a[i];

    cin >> sum_cnt;

    // 処理
    rep(i, sum_cnt){
        total=0;
        cin >> x >> y;
        for(int j=x; j<=y; j++){
            total+=a[j];
        }
        cout << total << endl;
    }
}


/* 参考回答
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int N,n,A;
    cin >> N;
    vector<long long int> sum(N+1,0);
    for (int i = 0; i < N; i++){
        cin >> A;
        sum[i+1] = sum[i]+A;
    }

    cin >> n;

    for (int i = 0; i < n; i++){
        int l,u;
        cin >> l >> u;
        cout << sum[u+1] - sum[l] << endl;
    }
}
*/