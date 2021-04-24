/* sample input
2
FLIP
2
2 0 0
1 1 4

2
FLIP
6
1 1 3
2 0 0
1 1 2
1 2 3
2 0 0
1 1 4
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, q, t, a, b, tcount=0;
    string s;
    char aa, bb;

    cin >> n;
    cin >> s;
    cin >> q;

    // 処理
    rep(i, q){
        cin >> t >> a >> b; 
        if(t==1){
            aa=s[a-1];
            bb=s[b-1];
            s[a-1]=bb;
            s[b-1]=aa;
        }else{
            tcount++;
        }
    }

    if(tcount%2==0){
        s=s.substr(n, n*2) + s.substr(0, n);
    }

    // 出力
    cout << s << endl;
}

/* 参考回答
else{
            s=s.substr(n, n*2) + s.substr(0, n);
        }
*/