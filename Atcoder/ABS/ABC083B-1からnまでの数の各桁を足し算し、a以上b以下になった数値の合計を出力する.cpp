/* sample input
100 4 16
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, a, b, num, sum=0;
    string stint;
    cin >> n >> a >> b;

    // 処理定義
    for(int i=a; i<=n; i++){
        // to_string()で数値型を文字列型に変換している
        stint = to_string(i);
        num = 0;

        for(int j=0; j<stint.size(); j++){
            // char型から「-'0'」することで、文字列として認識されていた数値をint型として認識させている
            num+=stint[j]-'0';
        }

        if(num >= a && num <= b){
            sum+=i;
        }
    }

    // 出力定義
    cout << sum << endl;

    return 0;
}