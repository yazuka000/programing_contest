/* sample input
2
2
2
100
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b, c, x, count=0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    // 処理定義
    for(int i=0; i<a+1; i++){
        for(int j=0; j<b+1; j++){
            for(int k=0; k<c+1; k++){
                if(500*i + 100*j + 50*k == x) count++;
            }
        }
    }

    // 出力定義
    cout << count << endl;
    return 0;
}