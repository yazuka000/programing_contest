/* sample input
5 1 3

1 4 3

5 5 5
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    vector<int> a(3);

    // 入力
    rep(i, 3){
        cin >> a[i];
    }

    // 処理
    sort(a.begin(), a.end());

    int x = abs(a[0]-a[1]);
    int y = abs(a[1]-a[2]);

    // 出力
    if(x==y){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

/* 参考回答

*/