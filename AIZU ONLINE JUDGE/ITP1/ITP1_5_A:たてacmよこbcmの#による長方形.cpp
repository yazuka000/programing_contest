/* sample input
3 4
5 6
2 2
0 0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b;

    // 処理定義
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0) break;

    // 出力定義
    for(int i=0; i<a; i++){
        for(int x=0; x<b; x++){
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    }

    return 0;
}