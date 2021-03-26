/* sample input
4
20 18 2 18
*/

#include <bits/stdc++.h> 
using namespace std;

// repマクロを定義、これによってfor文を短く出来る
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    // 初期値定義
    int n, A=0, B=0;
    cin >> n;

    // vector(可変長配列)を定義している。末尾の()内では(要素数, 初期値)と定義できる
    vector<int> card(n);

    rep(i, n){
        cin >> card[i];
    }

    // 処理定義
    // sort関数、vectorに対してのみ使える操作の1つ
    // 下のものは、beginとendにr(reverse)がついていることで、降順(数が大きい順)に並べ替えている
    sort(card.rbegin(), card.rend());

    rep(i, n){
        if(i%2==0){
            A+=card[i];
        }else{
            B+=card[i];
        }
    }

    // 出力定義
    cout << A-B << endl;

    return 0;
}


/*　参考回答
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main(void) {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend()); // 降順ソート
 
    int alice = 0, bob = 0;
    // 交互に振り分け
    rep(i, N) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }
    // 得点差を出力
    cout << alice - bob << endl;
 
    return 0;
}
*/
