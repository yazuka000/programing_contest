/* sample input
105

7

200
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n, count, ans=0;
    cin >> n;

    // 処理定義
    for(int i=1; i<=n; i+=2){
        count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==8){
            ans++;
        }
    }

    // 出力定義
    cout << ans << endl;
    return 0;
}

/* 参考回答

*/