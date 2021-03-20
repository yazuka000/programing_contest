#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int a, b, c;
    cin >> a >> b >> c;

    // 処理・出力定義
    if(a<b && b<c){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}