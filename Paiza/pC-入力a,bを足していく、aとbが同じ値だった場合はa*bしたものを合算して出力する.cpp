/* sample input
5
2 1
3 6
4 2
4 4
4 70
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, a, b, sum=0;
    cin >> n;

    // 処理定義
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(a==b){
            sum+=a*b;
        }else{
            sum+=a+b;
        }
    }

    // 出力定義
    cout << sum << endl;

    return 0;
}