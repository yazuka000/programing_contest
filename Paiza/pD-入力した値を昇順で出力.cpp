/* sample input
8
90 777 8888 121 333 4 29 2
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n;
    cin >> n;
    vector<int> nums(n);

    rep(i, n){
        cin >> nums[i];
    }

    // 処理定義
    sort(nums.begin(), nums.end());

    // 出力定義
    rep(i, n){
        cout << nums[i] << endl;
    }
    
    return 0;
}