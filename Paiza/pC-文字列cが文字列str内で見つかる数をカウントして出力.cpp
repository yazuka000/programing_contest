/* sample input
AA
abdeeAAbAAAbfde

Ji
JiJiiJiIjiIJjIJi
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int count=0;
    string c, str;

    cin >> c;
    cin >> str;

    // 処理定義
    for(int i=0; i<str.size()-1; i++){

        // 最後の文字列までインデックスで参照したいときは、下のように「j <= str.size()」と範囲指定する
        for(int j=i+1; j<=str.size(); j++){
            
            // for文内で、substrで文字列を指定するときは、(a, b-a)として指定すると良い
            if(str.substr(i, j-i)==c){
                count++;
            }
        }
    }

    // 出力定義
    cout << count << endl;

    return 0;
}