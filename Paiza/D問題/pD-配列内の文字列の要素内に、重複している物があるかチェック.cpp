/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    // vectorで定義にした配列なら、格納している値が文字列でも、size関数で要素数を取得できる
    vector<string> str = {"HND", "NRT", "KIX", "NGO", "NGO"};

    // 処理定義
    for(int i=0; i<str.size()-1; i++){
        for(int j=i+1; j<str.size(); j++){
            if(str[i]==str[j]){
                cout << "true" << endl;
                return 0;
            }
        }
    }

    // 出力定義    
    cout << "false" << endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> vec = {"HND", "NRT", "KIX", "NGO", "NGO"};
    bool duplicate = false;

    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size(); ++j) {
            if (i != j && vec[i] == vec[j]) {
                duplicate = true;
            }
        }
    }
    if (duplicate) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
*/