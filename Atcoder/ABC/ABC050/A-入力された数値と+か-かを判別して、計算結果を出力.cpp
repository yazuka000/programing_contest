/* sample input
1 + 2

5 - 7
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, c;
    char b;
    cin >> a >> b >> c;

    // 入力
    if(b=='+'){
        cout << a+c << endl;
    }else{
        cout << a-c << endl;
    }
}

/* 参考回答

*/