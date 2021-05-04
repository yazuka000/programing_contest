/* sample input
10 30 20

30 30 100

56 25 31
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a, b, c, sum=0, max;

    // 入力
    cin >> a >> b >> c;

    // 処理
    if(a>b && a>c){
        max=a;
        sum=b+c;
    }else if(b>a && b>c){
        max=b;
        sum=a+c;
    }else if(c>a && c>b){
        max=c;
        sum=a+b;
    }

    if(max==sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

/* 参考回答

*/