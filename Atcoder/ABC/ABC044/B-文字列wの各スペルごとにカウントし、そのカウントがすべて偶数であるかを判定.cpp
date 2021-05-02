/* sample input
abaccaba

hthth
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string w;
    cin >> w;
    map<char, int> mp;

    // 入力
    rep(i, w.size()){
        mp[w[i]]++;
    }

    // 処理
    for(auto i=mp.begin(); i!=mp.end(); i++){
        if(i->second%2!=0){
            cout << "No" << endl;
            return 0;
        }
    }

    // 出力
    cout << "Yes" << endl;
}

/* 参考回答

*/