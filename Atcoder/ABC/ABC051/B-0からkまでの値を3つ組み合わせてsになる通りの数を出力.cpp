/* sample input
2 2

5 15
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int k, s, count=0;
    cin >> k >> s;

    // 処理
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int l = s-i-j;

            if(l <= 0){
                l=0;
            }else if(l > k){
                continue;
            }

            if(s == i+j+l){
                count++;
                // cout << i << " " << j << " " << l << endl;
            }
        }
    }

    // 出力
    cout << count << endl;
}

/* 参考回答

*/