/* sample input
3
Everest 8849
K2 8611
Kangchenjunga 8586

4
Kita 3193
Aino 3189
Fuji 3776
Okuhotaka 3190

4
QCFium 2846
chokudai 2992
kyoprofriends 2432
penguinman 2390
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, x;
    string st;
    cin >> n;
    map<int, string> mt;
    vector<int> idx(n);

    rep(i, n){
        cin >> st >> x;
        mt[x]=st;
        idx[i]=x;
    }

    // 処理
    sort(idx.rbegin(), idx.rend());

    // 出力
    cout << mt[idx[1]] << endl;
}

/* 参考回答

*/


    /*
    rep(i, n){
        cout << idx[i] << endl;
    }
    */