/* sample input
4 8
7 9 8 9

3 8
6 6 9

8 5
3 6 2 8 7 6 5 9

33 3
3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
*/

/* 実装方針  ABC044
動的計画法(DP法)を用いて解く

*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // カード枚数n、指定されている平均値をA
    // 入力値
    int N, A;
    cin >> N >> A;

    int dM = A;
    vector<int> X(N);

    // nの数だけカードを入力し、入力された値aから指定の平均値Aを引いた値をx[i]に代入していく
    // dmには、入力されるカードの値aの最大値を格納する
    for(int i = 0; i < N; i++){
        int a; cin >> a;
        X[i] = a - A;
        dM = max(dM, a);
    }

    // 可変長配列の2次元配列dp[N + 1][2 * N * dM] = {0}を定義
    vector<vector<ll>> dp(N + 1, vector<ll>(2 * N * dM, 0));
    dp[0][N * dM] = 1;


    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2 * N * dM; j++){
            dp[i + 1][j] = dp[i][j];
            if(j - X[i] < 0 || j - X[i] > 2 * N * dM - 1)continue;
            dp[i + 1][j] += dp[i][j - X[i]];
        }
    }

    cout << dp[N][N * dM] - 1 << endl;
    return 0;
}


/* 参考回答
#include<iostream>
#include<iomanip>
#include<bitset>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
#include<map>
#include<set>
using namespace std;
using ll=long long;

int main(){
    int N, A;
    cin >> N >> A;
    int dM = A;
    vector<int> X(N);
    for(int i = 0; i < N; i++){
        int a; cin >> a;
        X[i] = a - A;
        dM = max(dM, a);
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(2 * N * dM, 0));
    dp[0][N * dM] = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2 * N * dM; j++){
            dp[i + 1][j] = dp[i][j];
            if(j - X[i] < 0 || j - X[i] > 2 * N * dM - 1)continue;
            dp[i + 1][j] += dp[i][j - X[i]];
        }
    }

    cout << dp[N][N * dM] - 1 << endl;
    return 0;
}

#include <iostream>
#include <vector>

int main() {
    int N, A;
    std::cin >> N >> A;
    std::vector<int> y(N);
    auto X = 0;
    for (auto &e : y) {
        int x;
        std::cin >> x;
        e = x - A;
        X = std::max(x, X);
    }
    X = std::max(A, X);
    std::vector<std::vector<long long int>> dp(N + 1, std::vector<long long int>(2 * N * X + 1));
    dp[0][N * X] = 1;
    for (auto j = 0; j < N; ++j) {
        for (auto t = 0; t < 2 * N * X; ++t) {
            dp[j + 1][t] += dp[j][t];
            auto p = t + y[j];
            if (0 <= p && p <= 2 * N * X) {
                dp[j + 1][p] += dp[j][t];
            }
        }
    }
    std::cout << dp[N][N * X] - 1ll;
    return 0;
}
*/