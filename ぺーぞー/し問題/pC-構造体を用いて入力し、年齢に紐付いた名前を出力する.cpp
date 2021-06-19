/* sample input
1
koko 23 04/10 tokyo
23

3
mako 13 08/08 nara
megumi 14 11/02 saitama
taisei 16 12/04 nagano
14
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int N, choice;
    cin >> N;
    vector<string> n(N), o(N), b(N), s(N);
    
    // 入力
    rep(i, N){
        cin >> n[i] >> o[i] >> b[i] >> s[i]; 
    }

    // 処理
    cin >> choice;

    rep(i, N){
        if(choice==stoi(o[i])){
            cout << n[i] << endl;
            return 0;
        }
    }
}

/* 参考回答
#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    int old;
    string birth;
    string state;
};

int main(){
    int N,K;
    cin >> N;
    student roster[N];
    for(int i=0;i<N;i++){
        cin >> roster[i].name >> roster[i].old >> roster[i].birth >> roster[i].state;
    }

    cin >> K;

    for(int i=0;i<N;i++){
        if(roster[i].old == K){
            cout << roster[i].name << endl;
        }
    }
}
*/