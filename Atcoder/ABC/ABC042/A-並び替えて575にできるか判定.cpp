/* sample input
5 5 7

7 7 5
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b, c;
    bool yn=false;

    // 入力
    cin >> a >> b >> c;

    // 処理
    if((a==5 || a==7 || b==5 || b==7 || c==5 || c==7) && a+b+c==17) yn=true;

    // 出力
    if(yn){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

/* 参考回答

*/