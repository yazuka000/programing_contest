/* sample input
1000 8
1 3 4 5 6 7 8 9

9999 1
0
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 0~9までの数値の配列bを定義
bool b[10];


bool check(int num) {
    while(num){
        // b[num%10]で、嫌いな数値があった場合、falseを返す
        if(b[num % 10]){
            return false;
        }
        num /= 10;
    }
    // 嫌いな数値に一つも引っかからなかったとき、trueを返す
    return true;
}


int main(){
    int n, k, d;
    cin >> n >> k;

    // 入力値dの値にある配列bをtrueにする
    // trueになった値が「いろはちゃんが嫌いとしている数値」になる
    for(int i=0; i<k; i++){
        cin >> d;
        b[d] = true;
    }

    // 値nを始点resとした、嫌いじゃない数値を使ってnを最も安く買える値段を全探索
    for(int res=n; ; res++){
        if(check(res)){
            cout << res << endl;
            return 0;
        }
    }

    return 0;
}

/* 参考回答
//ABC42C

#include <bits/stdc++.h>
using namespace std;

bool b[10];

bool check(int num) {
    do{
        if(b[num % 10]) return false;

        num /= 10;
    }
    while(num);

    return true;
}

int main(){

    int n, k, d;
    cin >> n >> k;

    for(int i=0; i<k; i++) cin >> d, b[d] = true;

    for(int res=n; ; res++){
        if(check(res)) return cout << res << endl, 0;
    }

    return 0;
}


*/