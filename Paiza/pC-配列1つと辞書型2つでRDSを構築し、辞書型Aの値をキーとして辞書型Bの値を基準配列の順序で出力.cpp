/* sample input
5
Kyoko B
Rio O
Tsubame AB
KurodaSensei A
NekoSensei A
4
A red
B green
O blue
AB yellow
*/


#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int a, b;
    string st1, st2;
    unordered_map<string, string> A;
    unordered_map<string, string> B;

    // 処理定義 
    cin >> a;
    vector<string> users(a);

    rep(i, a){
        cin >> st1 >> st2;
        users[i]=st1;
        A[st1]=st2;
    }

    cin >> b;
    rep(i, b){
        cin >> st1 >> st2;
        B[st1]=st2;
    }

    rep(i, a){
        // 出力定義
        cout << users[i] << " " << B[A[users[i]]] << endl;
    }

    return 0;
}


/* 参考回答
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> users(n);
    map<string, string> userToBlood;
    for (int i = 0; i < n; ++i) {
        string user, blood;
        cin >> user >> blood;
        users[i] = user;
        userToBlood[user] = blood;
    }
    int m;
    cin >> m;
    map<string, string> bloodToFortune;
    for (int i = 0; i < m; ++i) {
        string blood, fortune;
        cin >> blood >> fortune;
        bloodToFortune[blood] = fortune;
    }
    for (int i = 0; i < n; ++i) {
        cout << users[i] << ' ' << bloodToFortune[userToBlood[users[i]]] << endl;
    }
}
*/