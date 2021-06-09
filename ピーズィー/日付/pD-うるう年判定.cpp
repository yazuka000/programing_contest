/* sample input
2019

2020

2000

2100
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
    bool uru=false;

    // 入力
    cin >> n;

    // 処理
    if(n%4==0){
        uru=true;
    }

    if(n%100==0){
        uru=false;
    }

    if(n%400==0){
        uru=true;
    }

    if(n%4!=0){
        uru=false;
    }

    // 出力
    if(uru){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}

/* 参考回答

*/