/* sample input
3
1 2 2
3 1 2
2 3 2

解(1, 1) (1, 3) (2, 2) (3, 2) の計4つ

4
1 1 1 1
1 1 1 1
1 2 3 4

3
2 3 3
1 3 3
1 1 1


*/

/* 実装方針
答えは、最大で2のn乗となる

BCjとは、配列Bのインデックス[Cj]で指定されている値を指す


iを固定したときに、
A
i
=
B
C
j
 となる 
j
 の個数が高速に求められればよいです。これを前もって計算しておく方法を考えます。

B
k
 の値は 
1
 以上 
N
 以下であるので、長さ 
N
 程度の配列 
c
o
u
n
t
x
 を用意し、
j
 の値を全て試すことによって、各 
1
≤
x
≤
N
 について 
B
C
j
=
x
 となる 
j
 の個数を 
c
o
u
n
t
x
 として保持しておくことが出来ます。

各 
i
 について 
c
o
u
n
t
A
i
 を足し合わせたものが答えとなります。答えは最大で 
N
2
 になるため、
32
 bit 整数に収まらないことに注意してください。

このように、「同じような処理を何度も行う」ような問題においては、「前もって計算しておく」という方法がうまくいくことがしばしばあります。
*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, count=0;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    // 入力
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    // 処理
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==b[c[j]]) count++;
        }
    }

    // 出力
    cout << count << endl;
}

/* 参考回答


#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N), B(N), C(N);
    for (auto& x : A) {
        std::cin >> x;
        x -= 1;
    }
    for (auto& x : B) {
        std::cin >> x;
        x -= 1;
    }
    for (auto& x : C) {
        std::cin >> x;
        x -= 1;
    }
    std::vector<int> count(N);
    for (int j = 0; j < N; ++j) {
        count[B[C[j]]] += 1;
    }
    long long ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += count[A[i]];
    }
    std::cout << ans << '\n';
}


*/