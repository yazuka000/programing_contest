/* sample input
ATCODER

HATAGAYA

SHINJUKU
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    string s, acgt="ACGT";
    int count=0, ma_count=0;
    cin >> s;

    // 処理定義
    rep(i, s.size()){
        rep(j, acgt.size()){
            if(s[i] == acgt[j]){
                count++;
                break;
            }else {
                max(count, ma_count);
                count=0;
                break;
            }
        }
    }

    // 出力定義
    cout << ma_count << endl;

    return 0;
}

/* 参考回答
S = input()
N = len(S)
ans = 0
for i in range(N):
    for j in range(i, N):
        if all('ACGT'.count(c) == 1 for c in S[i : j + 1]):
print(ans)
*/