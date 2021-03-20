/*
30
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a;
    cin >> a;
    
    // 処理定義
    for (int i=3; i<=a; i++){
        int x = i;
        // 出力定義
        if(x % 3 == 0){
            cout << " " << i;
        }else{
            while(x > 0){
                if(x % 10 == 3){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
    return 0;
}