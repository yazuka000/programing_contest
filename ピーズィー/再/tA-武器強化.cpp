/* sample input
10000 3

解 10303

10 10

解 11

1000000000 5

101 30
*/

/* 実装方針
「x = x * (100+1) / 100」とは
xが1.1倍強化されるという意味になる
*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // sは武器の初期の強さ、pは強化ポイント
    ll s, p, maxx, count=0;
    cin >> s >> p;

    // 入力
    ll x=s, x1, x2;

    // 処理
    if(x < 100){
        for(int i=1; i<=p; i++){
            x1 = x * (100+i) / 100;
            if(x1 >= 100){
                p-=i;
                x=x1;
                break;
            }

            if(i==p){
                cout << x1 << endl;
                return 0;
            }
        }
    }

    for(int i=1; i<=p; i++){
        x = x * (100+1) / 100;
    }

    // 出力
    cout << x << endl;
}


/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // sは武器の初期の強さ、pは強化ポイント
    ll s, p, maxx;
    cin >> s >> p;

    // 入力
    ll x=s, x1=x, x2;

    // 処理
    if(x >= 100){
        for(int i=0; i<p; i++){
            x1 = x1 * (100+1) / 100;
            cout << x1 << endl;
        }
    }else{
        x2 = x * (100+p) / 100;
    }

    // 出力
    cout << maxx << endl;
}

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // sは武器の初期の強さ、pは強化ポイント
    ll s, p, maxx;
    cin >> s >> p;

    // 入力
    ll x=s, x1=x, x2;

    // 処理
    if(x >= 100){
        for(int i=0; i<p; i++){
            x = x * (100+1) / 100;
            cout << x1 << endl;
        }
    }else{
        x = x * (100+p) / 100;
    }

    // 出力
    cout << x << endl;
}

    for(int i=1; i<=p; ){
        if(x >= 100){
            x = x * (100+1) / 100;
            i++;
        }else{
            for(int j=1; j<=p; j++){
                x1 = x * (100+j) / 100;
                if(x1 >= 100){
                    i=j;
                    x=x1;
                    break;
                }
            }
            
        }
    }
*/