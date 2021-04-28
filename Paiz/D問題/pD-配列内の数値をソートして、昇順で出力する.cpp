/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    vector<int> num = {1, 3, 5, 6, 3, 2, 5, 23, 2};

    // 処理定義
    sort(num.begin(), num.end());

    // 出力定義
    rep(i, num.size()){
        cout << num[i] << endl;
    }
    
    return 0;
}