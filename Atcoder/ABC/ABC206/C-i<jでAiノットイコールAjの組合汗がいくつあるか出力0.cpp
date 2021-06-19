/* sample input
3
1 7 1

10
1 10 100 1000 10000 100000 1000000 10000000 100000000 1000000000
// 10+9+8+7+6+5+4+3+2+1 = 45  

20
7 8 1 1 4 9 9 6 8 2 4 1 1 9 5 5 5 3 6 4


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
    // 初期値
    ll n, cnt = 0;
    cin >> n;
    vector<int> A(n);

    // 入力
    rep(i, n) cin >> A[i];

    sort(A.begin(), A.end());

    // 処理
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i >= j) continue;

            if(A[i] != A[j]){
                cnt++;
            }
        }
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答
#include<bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector<int> a(n);
  for(auto &nx : a){cin >> nx;}
  long long res1=(n*(n-1)/2),res2=0;
  
  map<int,long long> mp;
  for(int i=0;i<n;i++){mp[a[i]]++;}
  for(int i=0;i<n;i++){res2+=(n-mp[a[i]]);}
  res2/=2;
  
  sort(a.begin(),a.end());
  a.push_back(-1);
  long long cnt=1;
  for(int i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      res1-=((cnt*(cnt-1))/2);
      cnt=1;
    }
    else{cnt++;}
  }
  assert(res1==res2);
  cout << res1 << '\n';
  //cout << res2 << '\n';
}


*/