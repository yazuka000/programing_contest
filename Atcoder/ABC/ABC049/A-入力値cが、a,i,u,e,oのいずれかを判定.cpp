/* sample input
a

z
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    char c;

    // 入力
    cin >> c;

    // 処理
    if(c=='a' || c=='i' || c=='u' || c=='e' || c=='o'){
        cout << "vowel" << endl;
    }else{
        cout << "consonant" << endl;
    }
}

/* 参考回答

*/