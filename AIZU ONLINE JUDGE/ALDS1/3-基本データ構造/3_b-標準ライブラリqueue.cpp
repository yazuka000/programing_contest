/* sample input
5 100
p1 150
p2 80
p3 200
p4 350
p5 20

11 10
a 10
b 20
c 5
d 12
e 30
f 9
g 20
h 100
i 10
j 20
k 10
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, q, t;
    string name;

    // 標準ライブラリのqueueを使用
    // 末尾の「>>」は、「> >」でないとコンパイルエラーになる
    queue<pair <string, int> > Q; // プロセスのキュー

    cin >> n >> q;

    // 全てのプロセスをキューに順番に追加する
    for(int i=0; i<n; i++){
        cin >> name >> t;

        // make_pairを使うことで、pair型の構造体でQにpushする
        Q.push(make_pair(name, t));
    }

    pair<string, int> u;
    int elpas = 0, a;

    // シミュレーション
    while(!Q.empty()){
        u = Q.front();
        Q.pop();

        a = min(u.second, q); // q または必要な時間u.tだけ処理を行う
        u.second -= a; // 残りの必要時間を計算
        elpas += a; // 経過時間を加算

        if(u.second > 0){
            Q.push(u);
        }else{
            cout << u.first << " " << elpas << endl;
        }
    }
}

/* 参考回答

*/