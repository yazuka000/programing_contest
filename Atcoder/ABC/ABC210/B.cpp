/* sample input
5
00101

3
010


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n;
    string s;

    // 入力
    cin >> n;
    cin >> s;

    // 処理
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            if(i % 2 == 0) cout << "Takahashi" << endl;
            else cout << "Aoki" << endl;

            return 0;
        }
    }

}

/* 参考回答

*/