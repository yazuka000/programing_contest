/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b, ans;
    cin >> a >> b;

    // 処理定義
    ans = a*b;

    // 出力定義
    if(ans % 2 == 0) cout << "Even";
    else cout << "Odd";
    cout << endl;
    
    return 0;
}