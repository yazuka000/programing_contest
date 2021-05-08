/* sample input

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
#include<bits/stdc++.h>
 
using namespace std;
 
void output(vector<int> &a){
  cout << a.size();
  for(auto &nx : a){
    cout << ' ' << nx;
  }
  cout << '\n';
}
 
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &nx : a){cin >> nx;}
  vector<vector<int>> bk(200,vector<int>(0));

  int cnt=min(n,8);
  for(int i=1;i<(1<<cnt);i++){
    int sig=0;
    vector<int> s;
    for(int j=0;j<cnt;j++){
      if(i&(1<<j)){
        s.push_back(j+1);
        sig+=a[j];sig%=200;
      }
    }
    if(bk[sig].size()!=0){
      cout << "Yes\n";
      output(bk[sig]);
      output(s);
      return 0;
    }
    else{bk[sig]=s;}
  }
  cout << "No\n";
  return 0;
}


*/