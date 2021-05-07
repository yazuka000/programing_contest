/* sample input
5
2 4 4 0 2

7
6 4 0 2 4 0 2

8
7 5 1 1 7 3 5 3
*/

/* 実装方針　ABC050
N が偶数である場合を考えます。

N 人が並んだ場合、
「自分の左に並んでいた人数と自分の右に並んでいた 人数の差の絶対値」は、
N − 1,N − 3,N − 5,...3,1,1,3,...N − 5,N − 3,N − 1 となるはずです。
この配列 を Bi とします。

するとこの問題は、Ai を並び替えて Bi にする方法は何通りか、という問題になります。
まず、Ai と Bi で、ある値の登場する回数が等しくなかった場合、明らかに答えは 0 です。

では、等しい場合はどうなるでしょうか。
この配列には、N/2 種類の値が、それぞれ 2 回ずつ登場している はずです。

それぞれの値について、並び替える方法は、「Ai で前にあったものが Bi で前にある」と、
「Ai で 前にあったものが Bi で後ろにある」の 2 通り考えられます。

N/2 種類の値で独立に並び替えがあるので、求める答えは 2(N/2) になります。

N が奇数である場合も同様に解けますが、その場合 Ai や Bi の中に 0 という値が 1 度だけ登場することに注意してください。
*/


#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);++i)
using namespace std;
using ll=long long;

int main(){
    int n; 
    cin >> n;
    vector<int> p(100000);

    rep(i, n){
        int k; 
        cin >> k;
        // kをインデックス番号とした要素を++する
        p[k]++;
    }

    // nが奇数の場合
    if(n%2==0){
        rep(i, n){
            if(!((i%2==0 && p[i]==0) || (i%2==1 && p[i]==2))) {
                cout << 0 << endl;
                return 0;
            }
        }

    }else{
        if(p[0]!=1){
            cout << 0 << endl;
            return 0;
        }

        rep(i, n-1){
            if(!(((i+1)%2==1 && p[i+1]==0) || ((i+1)%2==0 && p[i+1]==2))) {
                cout << 0 << endl;
                return 0;
            }
        }
    }

    ll res=1;

    rep(i, n/2){
        res*=2;
        res%=1000000007;
    }

    cout << res << endl;
    return 0;
}

/* 参考回答
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);++i)
using namespace std;
using ll=long long;

int main(){
 int n; cin>>n;
 vector<int> p(100000);
 rep(i,n) {
  int k; cin>>k;
  p[k]++;
 }
 if(n%2==0){
  rep(i,n) {
   if(!((i%2==0&&p[i]==0)||(i%2==1&&p[i]==2))) {
    cout<<0<<endl;
    return 0;
   }
  }
 } else {
  if(p[0]!=1){
   cout<<0<<endl;
   return 0;
  }
  rep(i,n-1) {
   if(!(((i+1)%2==1&&p[i+1]==0)||((i+1)%2==0&&p[i+1]==2))) {
    cout<<0<<endl;
    return 0;
   }
  }
 }
 ll res=1;
 rep(i,n/2){
  res*=2;
  res%=1000000007;
 }
 cout<<res<<endl;
 return 0;
}
*/