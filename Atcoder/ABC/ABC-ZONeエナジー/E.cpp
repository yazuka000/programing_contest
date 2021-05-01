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
#include <queue>
#include <tuple>
using namespace std;
bool chmin(int& a, int b){ if(a > b){ a = b; return 1; } return 0; }

int main(){
    int R, C;
    cin >> R >> C;
    vector A(R, vector<int>(C - 1)), B(R - 1, vector<int>(C));
    for(auto& a : A) for(int& i : a) cin >> i;
    for(auto& b : B) for(int& i : b) cin >> i;
    vector cost(2, vector(R, vector(C, 0x3fffffff)));
    cost[0][0][0] = 0;
    priority_queue q(greater<>{}, vector{tuple{0, 0, 0, 0}});
    while(q.size()){
        auto [x, f, r, c] = q.top();
        q.pop();
        if(cost[f][r][c] != x) continue;
        if(f){
            if(int f2 = 0, r2 = r, c2 = c, x2 = x; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
            if(r) if(int f2 = 1, r2 = r - 1, c2 = c, x2 = x + 1; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
        }
        else{
            if(int f2 = 1, r2 = r, c2 = c, x2 = x + 1; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
            if(r + 1 < R) if(int f2 = 0, r2 = r + 1, c2 = c, x2 = x + B[r][c]; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
            if(c) if(int f2 = 0, r2 = r, c2 = c - 1, x2 = x + A[r][c2]; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
            if(c + 1 < C) if(int f2 = 0, r2 = r, c2 = c + 1, x2 = x + A[r][c]; chmin(cost[f2][r2][c2], x2)) q.emplace(x2, f2, r2, c2);
        }
    }
    cout << cost[0].back().back() << endl;
}


*/