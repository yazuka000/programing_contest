/* sample input
6
123 223 123 523 200 2000

5
1 2 3 4 5

8
199 100 200 400 300 500 600 200
*/

/* 実装方針
「Ai−Ajが 200の倍数である」ということは、「Aiを 200で割った余りと Ajを 200で割った余りが一致する」と言い換えられます。
*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    ll n, count=0;
    cin >> n;
    vector<ll> a(n);

    // 入力
    rep(i, n){
        cin >> a[i];
    }
    

    // 処理
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if((a[j]-a[i]) % 200 == 0) count++;
        }
    }

    // 出力
    cout << count/2 << endl;
}

/* 参考回答
for(int bit = 0; bit < (1<<n); bit++){

    vector<int> S;

    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)){ 
            S.push_back(i);
        }
    }

    ll ans=0

    for (int i = 0; i < (int)S.size(); ++i){
        
        cout << S[i] << " ";
    }
}

for(int bit = 2; bit < n*(n-1); bit++){

    vector<int> S;

    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)){ 
            S.push_back(i);
        }
    }

    ll ans=0

    for (int i = 0; i < (int)S.size(); ++i){
        
        cout << S[i] << " ";
    }
}

#include<stdio.h>

int main(){
  int n,a[200005];
  long long b[200]={0};
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[a[i]%200]++;
  }
  long long res=0;
  for(int k=0;k<200;k++){
    res+=(b[k]*(b[k]-1))/2;
  }
  printf("%lld\n",res);
  return 0;
}


*/