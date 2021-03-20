
// sample input: 46979

#include <bits/stdc++.h> 
using namespace std;

int main(){
    // 初期値定義
    int S, h, m, s;
    cin >> S;

    // 処理定義
    h = S / 3600;
    m = (S % 3600) / 60;
    s = (S % 3600) % 60;

    // 出力定義
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}