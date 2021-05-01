/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int a;

    // 入力

    // 処理

    // 出力
    cout << a << endl;
}

/* 参考回答
#include <iostream>
#include <vector>
using namespace std;
void chmin(int& a, int b){ if(a > b) a = b; }

int main(){
    int N, M;
    cin >> N >> M;
    vector ok(N, true);
    while(M--){
        int A;
        cin >> A;
        ok[A] = false;
    }
    vector<int> base, elim;
    for(int x = 1; x < N; x++) if(ok[x]){
        int y = x;
        for(int b : elim) chmin(y, y ^ b);
        if(y){
            base.push_back(x);
            elim.push_back(y);
        }
    }
    if(base.size() != __lg(N)) return puts("-1") & 0;
    int XOR = 0;
    for(int x = 1; x < N; x++){
        cout << XOR << ' ';
        XOR ^= base[__lg(x & -x)];
        cout << XOR << '\n';
    }
}


*/