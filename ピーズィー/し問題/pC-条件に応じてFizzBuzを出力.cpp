/* sample input
5

20

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n;

    // 入力
    cin >> n;

    // 処理
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            cout << "Fizz Buzz" << endl;
        }else if(i%3==0){
            cout << "Fizz" << endl;
        }else if(i%5==0){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
}

/* 参考回答

*/