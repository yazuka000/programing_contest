/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a;

    // 入力

    // 処理

    // 出力
    cout << a << endl;
}

/* 参考回答
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    deque<char> q;
    bool rev = false;
    for(char c : S){
        if(c == 'R') rev ^= 1;
        else if(rev) q.push_front(c);
        else q.push_back(c);
    }
    if(rev) reverse(q.begin(), q.end());
    string T;
    for(char c : q){
        if(T.size() && T.back() == c) T.pop_back();
        else T.push_back(c);
    }
    cout << T << endl;
}


*/