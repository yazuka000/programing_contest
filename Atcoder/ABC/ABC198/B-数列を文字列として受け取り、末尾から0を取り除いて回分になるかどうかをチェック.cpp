/* sample input
1210

777

123456789
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string n, n2;

    // 入力
    cin >> n;

    // 処理
    while (*n.rbegin() == '0') n = n.substr(0, n.length() - 1);

    n2=n;

    reverse(n2.rbegin(), n2.rend());

    cout << n << endl;
    cout << n2 << endl;

    // 出力
    if(n==n2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string N;
#define YES "Yes"
#define NO "No"
void _main() {
    cin >> N;
    
    while (*N.rbegin() == '0') N = N.substr(0, N.length() - 1);

    string NN = N;
    reverse(all(NN));

    if (N == NN) cout << YES << endl;
    else cout << NO << endl;
}


*/