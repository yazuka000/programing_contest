/* sample input
5
A -2
E 0
W -5
A -1
E -20
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n, num;
    char ch;
    cin >> n;

    // c++では、辞書型において、値を基準にソートする手法は存在しない
    // そこで、まず<char, int>の辞書型mpと、<int, char>の辞書型ansを定義する
    map<char, int> mp;
    map<int, char> ans;

    // 処理定義
    // 下のループで、まずmpにchをキー、numを値として格納していく
    rep(i, n){
        cin >> ch >> num;
        mp[ch]+=num;
    }

    // 下のループで、ansのキーにmpの値を、ansの値にmpのキーを格納していく
    for(auto i = mp.begin(); i != mp.end(); i++){
        ans[i->second] = i->first;
    }

    // 出力定義
    // 下のループの「i = ans.rbegin(); i != ans.rend()」によって、キーを降順に並べ替えている
    // そして、ループ内で値(i->second)、キー(i->first)の順で出力している
    for(auto i = ans.rbegin(); i != ans.rend(); i++){
        cout << i->second << " " << i->first << endl;
    }

    return 0;
}