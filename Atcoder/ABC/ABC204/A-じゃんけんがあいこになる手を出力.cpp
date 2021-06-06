/* sample input
0 1

0 0


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b;

    // 入力
    cin >> a >> b;

    // 処理
    if(a==b) cout << a << endl;
    else if(a==0 && b == 1) cout << 2 << endl;
    else if(a==1 && b == 0) cout << 2 << endl;
    else if(a==1 && b == 2) cout << 0 << endl;
    else if(a==2 && b == 1) cout << 0 << endl;
    else if(a==0 && b == 2) cout << 1 << endl;
    else if(a==2 && b == 0) cout << 1 << endl;
}

/* 参考回答
int main(){
  int x, y;
  scanf("%d %d", &x, &y);
  if(x==y) printf("%d", x);
  else printf("%d", 3-x-y);
}


*/