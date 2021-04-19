/* sample input
2 2

1 1000000000000
*/

/* 実装方針
素直に繰り返しで A の要素の足し算を行おうとすると、最大 10 ^ 12 回ループが回ることになってしまい、実行制限時間に間に合いません。
そこで計算の工夫を行います。

数列 A の規則性に注目します。 
A の連続する 3 つの要素の和は必ず 0 になります。

そのため、N 項目から 3 要素ずつ区切っていき、最後に残った要素の和が答えとなります。

最後に残る要素は 0 要素 〜 2 要素であり、
その要素は N , K を 3 で割った余りによって定まるので、N%3 , K%3 について場合分けを行うことで答えを求めることができます。

int A[3] = {1 , 0 , -1};
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int n, k, ans;

    // 入力
    cin >> n >> k;

    // 処理 int A[3] = {1 , 0 , -1} の配列が想定されている;

    // n%3が1かつ、k%3が0だと、インデックス番号1の 0 がansに入る
    if(n%3==1){
        if(k%3==0){
            ans=0;
        }else{
            ans=1;
        }

    // n%3が2かつk%3が0だと、インデックス番号2の -1 がansに入る
    }else if(n%3==2){
        if(k%3==0){
            ans=-1;
        }else{
            ans=0;
        }

    // n%3が0かつ、k%3が0だと、基準の配列が逆順となり{-1 , 0 , 1} となる
    // したがって、インデックス番号0の -1 がansに入る
    }else{
        if(k%3==0){
            ans=-1;
        }else{
            ans=0;
        }
    }

    // 出力
    // cout << n%3 << endl;
    // cout << k%3 << endl;

    cout << ans << endl;
}

/* 参考回答
#include <iostream>

using namespace std;

int main(){
    long long int N,K;
    cin >> N >> K;
    if(N%3==1){
        if(K%3==0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }else if(N%3==2){
        if(K%3==0){
            cout << -1 << endl;
        }else{
            cout << 0 << endl;
        }
    }else{
        if(K%3==0){
            cout << -1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
*/