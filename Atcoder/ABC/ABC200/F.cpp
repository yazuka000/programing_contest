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
#include<stdio.h>
#include<string.h>
#define mod 1000000007
#define inv2 500000004

long long power(long long a,long long b){
  long long x=1,y=a;
  while(b>0){
    if(b&1ll){
      x=(x*y)%mod;
    }
    y=(y*y)%mod;
    b>>=1;
  }
  return x%mod;
}

long long f(char a,char b){
  if(a=='?' || b=='?'){return inv2;}
  if(a!=b){return 1;}
  return 0;
}

int main(){
  char s[131072];
  long long k;
  scanf("%s%lld",s,&k);
  int len=strlen(s);
  if(k*len==1){printf("0\n");return 0;}
  long long q=0;
  for(int i=0;i<len;i++){
    if(s[i]=='?'){q++;}
  }
  
  long long res=0;
  long long pat=power(2,k*q);
  for(int i=0;i<len;i++){
    res+=((pat*k)%mod)*f(s[i],s[(i+1)%len]);
    res%=mod;
  }
  res*=inv2;res%=mod;
  printf("%lld\n",res);
  return 0;
}


*/