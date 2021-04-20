/* sample input

*/

/* 実装方針
素直に min(A,B) から 1 にむけて繰り返しを用いて次のように最大公約数を探すと、 
ループ回数が最大で 10 ^ 10 になってしまうので実行時間制限に間に合いません。

そこで、 ユークリッドの互除法 を用います。 
これは 「AとBの最大公約数は、BとA%Bの公約数と等しい」 
という性質を利用して最大公約数を求める方法です。 

この方法を用いると計算量が O(log(max(A, B))) となります。

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long int gcd(long long int A, long long int B){
    // Bが0なら、Aがそのまま最大公約数になる
    if(B == 0){
        return A;
    }
    // 「AとBの最大公約数は、BとA%Bの公約数と等しい」
    return gcd(B, A%B);
}

int main(){
    long long int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
}

/* 参考回答
#include <iostream>

using namespace std;

long long int gcd(long long int A, long long int B){
    if(B == 0){
        return A;
    }
    return gcd(B,A%B);
}

int main(){
    long long int A,B;
    cin >> A >> B;
    cout << gcd(A,B) << endl;
}
*/