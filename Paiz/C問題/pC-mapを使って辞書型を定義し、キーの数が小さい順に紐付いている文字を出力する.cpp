/* sample input
5
H -2
R 0
W -5
A -1
E -20
*/

#include <bits/stdc++.h> 
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int n, num;
    char ch;
    cin >> n;

    // mapを使うことで、C++でも辞書型を定義できる
    // <>内の、左側がキー、右側が値になる
    map<int, char> mp;

    // 処理定義
    rep(i, n){
        cin >> ch >> num;
        mp[num] = ch;
    }

    // map型をsortでソートしようとするとエラーになる、よって下記のsortは悪い例
    // sort(mp.begin(), mp.end());

    // 出力定義
    for (auto iter = mp.begin(); iter != mp.end(); ++iter) {
        cout << iter->second << endl;
    }
    
    return 0;
}

/*
    for (std::map<std::string, int>::iterator i = seqLen.begin(); i != seqLen.end(); ++i) {
        std::cout << i->first << " => " << i->second << std::endl;
    }

    for (auto i = mp.begin(); i != mp.end(); ++i) {
        std::cout << i->first << " => " << i->second << std::endl;
    }
*/

/*　参考回答
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, string> ds;
    for (int i = 0; i < n; ++i) {
        string s;
        int d;
        cin >> s >> d;
        ds[d] = s;
    }
    for (auto iter = ds.begin(); iter != ds.end(); ++iter) {
        cout << iter->second << endl;
    }
}

*/