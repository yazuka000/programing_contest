/* sample input
9 45000

                if(i*10000 + j*5000 + k*1000 == yen && i + j + k == n){
                    printf("%d %d %d\n", i, j, k);
                    return 0;

   rep(i, yen/10000){
        rep(j, (yen/10000)/5000){
            rep(k, ((yen/10000)/5000)/1000){

                }
            }
        }
    }
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i <= (int)(n); i++)
#define repr(i, a, b) for (int i = a; i < b; i++)

int main() {
    // 初期値定義
    int n, yen;
    cin >> n >> yen;

    // 処理定義
    for(int i=0; i<=n; i++){
        for(int j=0; j<=(yen%10000)/5000; j++){
            for(int k=0; k<=((yen%10000)%5000)/1000; k++){
                if(i*10000 + j*5000 + k*1000 == yen && i+j+k == n){
                    printf("%d %d %d\n", i, j, k);
                    return 0;
                }
            }
        }
    }

    // 出力定義
    printf("-1 -1 -1\n");
    return 0;
}