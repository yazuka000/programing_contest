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
    string s;
    int count=0, ma_count=-1000000;
    cin >> s;

    // 処理定義
    // sを1文字ずつ全探索
    for(int i=0; i<s.size(); i++){
        // A, C, G, Tのいずれかだったとき1カウント
        if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T'){
            count++;

        // そうでなかったら、カウントをリセット
        }else{
            count=0;
        }

        // ループの終わりに最大カウント量を格納
        ma_count=max(count, ma_count);
    }

    // 出力定義
    cout << ma_count << endl;
    return 0;
}

/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();
    int res = 0;

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = i; j < N; j++) {
            char s = S[j];
            if (s == 'A' || s == 'C' || s == 'G' || s == 'T') {
                cnt++;
            } else {
                break;
            }
        }
        res = max(res, cnt);
    }

    cout << res << endl;
    return 0;
}
*/