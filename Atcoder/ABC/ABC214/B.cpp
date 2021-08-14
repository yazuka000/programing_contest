/* sample input
1 0

2 5

10 10

30 100


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int s, t, cnt=0;

    // 入力
    cin >> s >> t;

    // 処理
    for(int a=0; a<=s; a++){
        for(int b=0; b<=s; b++){
            for(int c=0; c<=s; c++){
                if(a+b+c <= s && a*b*c <= t){
                    cnt++;
                }
            }
        }
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答

*/