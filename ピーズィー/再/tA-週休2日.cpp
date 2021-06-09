/* sample input
14
1 1 1 1 1 0 0 1 1 1 1 1 0 0

解 14

9
1 0 1 1 1 1 1 1 0

解 0

11
1 1 1 0 1 1 1 0 1 1 0

解 10
*/

/* 実装方針
・7 <= n <= 100,000
・diは、1か0である

答えは確定で、0か7以上になる

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, maxsch=0;
    cin >> n;
    vector<int> sch(n), zindex;

    // 入力
    // 0が休日、1が平日
    rep(i, n){
        cin >> sch[i];

        if(sch[i]==0){
            zindex.push_back(i);
            cout << i << endl;
        }
    }

    // 処理
    // 0~6, 7~13
    // i+1%7==0



    // 出力
    // cout << one << endl;
}


/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, one=0, zero=0, ans=0;
    cin >> n;
    vector<int> sch(n);

    // 入力
    // 0が休日、1が平日
    rep(i, n){
        cin >> sch[i];
    }

    // 処理
    // 0~6, 7~13
    // i+1%7==0
    int i=0;
    while(n > i){

        if(sch[i]==1){
            one++;
        }else if(sch[i]==0){
            zero++;
        }

        if((i+1) % 7 == 0){
            if(zero==2){
                one += zero;
                zero=0;
            }else{
                one = 0;
                zero = 0;
            }
        }

        // cout << i << endl;

        i++;
    }

    // 出力
    cout << one << endl;
}
*/