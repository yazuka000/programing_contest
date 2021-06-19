/* sample input
1
koko 23 04/10 tokyo

3
mako 13 08/08 nara
megumi 14 11/02 saitama
taisei 16 12/04 nagano
*/

/* 実装方針

「ある人や物に関する情報をまとめて管理したい」という考え方が構造体を使う上で大切な考え方です。

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int N;
    string n, o, b, s;
    cin >> N;
    
    // 入力

    // 処理
    rep(i, N){
        cin >> n >> o >> b >> s; 

        cout << "User{" << endl;
        cout << "nickname : " << n << endl;
        cout << "old : " << o << endl;
        cout << "birth : " << b << endl;
        cout << "state : " << s << endl;
        cout << "}" << endl;
    }
}

/* 参考回答

*/