/* sample input
2 7
1 8

1 3
33

7 1000000000000
99 8 2 4 43 5 3


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a;

    // 入力

    // 処理

    // 出力
    cout << a << endl;
}

/* 参考回答
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int N;
  long long K;
  cin >> N >> K;

  vector<int> a(N);
  for (auto& x : a) cin >> x;

  vector<int> order(N);
  iota(begin(order), end(order), 0);
  sort(begin(order), end(order), [&](int i, int j) { return a[i] < a[j]; });

  vector<long long> answer(N, K / N);
  for(int i = 0; i < K % N; i++) answer[order[i]]++;

  for(auto&x : answer) cout << x << "\n";
}


*/