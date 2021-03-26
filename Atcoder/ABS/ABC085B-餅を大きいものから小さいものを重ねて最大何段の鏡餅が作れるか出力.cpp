/* sample input
4
10
8
8
6
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n, stage=0, now=0;
    cin >> n;
    vector<int> mo(n);

    rep(i, n){
        cin >> mo[i];
    }

    // 処理定義
    sort(mo.rbegin(), mo.rend());

    rep(i, n){
        if(now!=mo[i]){
            now=mo[i];
            stage++;
        }
    }

    // 出力定義
    cout << stage << endl;

    return 0;
}