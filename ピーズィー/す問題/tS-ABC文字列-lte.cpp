/* sample input
2 3 6

10 123 139

*/

/* 実装方針
処理を行うレベル数、出力時の先頭要素・末尾要素を入力


stringの配列に、ABCを初期値として格納

レベルの数だけ処理を行う

sからマイナス1して先頭のイテレータ、その後tからsの値を引いて末尾のイテレータを指定する


stringの配列から[k-1]した要素の、sからtまでの部分文字列を出力

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // kはレベル数、sは文字列の先頭要素の番号、tは末尾要素の指定
    int k, s, t;
    cin >> k >> s >> t;

    // answersに、初期値ABCを格納
    string answers = "ABC";

    for(int i = 1; i < k; i++) answers = 'A' + answers + 'B' + answers + 'C';

    // sをマイナス1することで、インデックスのズレを合わせる
    s--;

    // tからsの数だけ引くことで、sを基準とした末尾のインデックスtを正確に指定する
    // 単にtをそのまま使ってしまうと、インデックスをうまく指定できない
    // しかし、先頭を基準に、配列の末尾を指定する場合は、末尾の番号から先頭の番号を引くことで、末尾のイテレーターを正確に指定できる
    t -= s;

    string ans = answers.substr(s, t);
    cout << ans << endl;

    return 0;
}

/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // kはレベル数、sは文字列の先頭要素の番号、tは末尾要素の指定
    int k, s, t;
    cin >> k >> s >> t;

    // 配列answersに、初期値ABCを格納
    vector<string> answers;
    answers.emplace_back("ABC");

    for(int i = 1; i < k; i++){
        string tmp = "";
        tmp = 'A' + answers[i - 1] + 'B' + answers[i - 1] + 'C';
        answers.emplace_back(tmp);
    }

    // sをマイナス1することで、インデックスのズレを合わせる
    s--;

    // tからsの数だけ引くことで、sを基準とした末尾のインデックスtを正確に指定する
    // 単にtをそのまま使ってしまうと、インデックスをうまく指定できない
    // しかし、先頭を基準に、配列の末尾を指定する場合は、末尾の番号から先頭の番号を引くことで、末尾のイテレーターを正確に指定できる
    t -= s;

    string ans = answers[k - 1].substr(s, t);
    cout << ans << endl;

    return 0;
}
*/
