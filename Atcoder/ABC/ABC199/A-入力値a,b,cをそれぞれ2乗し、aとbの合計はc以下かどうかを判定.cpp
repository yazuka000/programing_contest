/* sample input
2 2 4

10 10 10

3 4 5
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b, c;

    // 入力
    cin >> a >> b >> c;

    // 処理
    a*=a;
    b*=b;
    c*=c;

    // 出力
    if(a+b<c){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

/* 参考回答

*/