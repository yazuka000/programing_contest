/* sample input
23
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int N;
    cin >> N;

    // 処理定義
    bool judge = false;

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(i*j==N) judge = true;
        }
    }

    // 出力定義
    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

/* 参考回答

*/