/* sample input
6
5
3
1
3
4
3

3
4
3
2
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
static const int MAX = 200000;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    ll R[MAX], n;

    // 入力
    cin >> n;
    for(int i=0; i<n; i++) cin >> R[i];

    ll maxv = -200000000000; // 十分低い値をmaxvに格納
    ll minv = R[0]; // 最初のインデックス0をminvに格納


    for(int i=1; i<n; i++){
        maxv = max(maxv, R[i]-minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;
}

/* 参考回答

*/