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
#include <array>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector A(N, array<int, 5>{});
    for(auto& a : A) for(int& i : a) cin >> i;
    int ok = 0, ng = 1000000001;
    auto check = [&](int x) -> bool {
        set<int> s;
        for(auto& a : A){
            int bit = 0;
            for(int& i : a){
                bit <<= 1;
                bit |= i >= x;
            }
            s.insert(bit);
        }
        for(int x : s) for(int y : s) for(int z : s){
            if((x | y | z) == 31) return 1;
        }
        return 0;
    };
    while(abs(ok - ng) > 1){
        int cen = (ok + ng) / 2;
        (check(cen) ? ok : ng) = cen;
    }
    cout << ok << endl;
}


*/