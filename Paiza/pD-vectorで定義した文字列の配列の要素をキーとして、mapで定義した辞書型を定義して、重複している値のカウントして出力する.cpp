/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    vector<string> str = {"HND", "NRT", "KIX", "NGO", "NGO", "NGO", "NGO", "NGO"};

    // map関数で、上記の文字列をキーとした辞書型を定義する
    map<string, int> count;

    // 処理定義
    for(int i=0; i<str.size(); i++){
        
        // 辞書型countに、str[i]の要素の文字列をキーとして、そのキーに紐付いているint型の値を++している
        count[str[i]]++;
    }

    // 出力定義
    // 辞書型・mapで定義した要素をfor文で出力するときは、下記のように書く
    // 「i = count.rbegin(); i != count.rend()」は、処理を行いたい順序によって書き換える
    for(auto i = count.rbegin(); i != count.rend(); i++){

        // 辞書型の値を出力するときは、「i->second」と指定する
        // キーを出力する場合は「i->first」と指定する
        if(i->second >= 2){
            cout << i->second << endl;
        }
    }
    return 0;
}