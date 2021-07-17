/* sample input
7 3
1 2 1 2 3 3 1

5 5
4 4 4 4 4

10 6
304621362 506696497 304621362 506696497 834022578 304621362 414720753 304621362 304621362 414720753


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // キャンディの総数n個、連続でもらえる個数k個
    ll n, k;
    int maxcnt = -100000, cnt = 0;

    // 入力
    cin >> n >> k;

    vector<int> c(n);

    rep(i, n) cin >> c[i];

    map<ll, int> mp;

    // 処理
    for(int i=0; i<n; i++){
        for(int j=i; j <= i+k-i; j++){
            if(mp[j] != 1){
                cnt++;
                mp[j] = 1;
            }
        }
    }

    // 出力
    
}

/* 参考回答
#include <iostream>
#include <map>

using namespace std;

int n, k;
int c[300005];
map<int, int> mp;

int main(void)
{
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> c[i];

  for(int i = 1; i <= k; i++) mp[c[i]]++;
  int ans = mp.size();

  for(int i = k+1; i <= n; i++){
    mp[c[i]]++;
    mp[c[i-k]]--;
    if(mp[c[i-k]] == 0) mp.erase(c[i-k]);
    ans = max(ans, (int)mp.size());
  }
  cout << ans << endl;

  return 0;
}


*/