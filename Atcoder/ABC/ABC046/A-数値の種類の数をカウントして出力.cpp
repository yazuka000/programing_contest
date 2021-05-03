/* sample input
3 1 4

3 3 33


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int s[3], count=0;
    cin >> s[0] >> s[1] >> s[2];
    map<int, int> mp;

    rep(i, 3){
        mp[s[i]]++;
    }

    // 処理
    for(auto i=mp.begin(); i!=mp.end(); i++){
        count++;
    }

    // 出力
    cout << count << endl;
}

/* 参考回答

*/