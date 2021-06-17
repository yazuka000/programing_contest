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

BAAABCBABCCBAABCB
BAAABCBABCCBAABCB
*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string ans = "";

bool resolve_L(ll level_pos, ll x){
    if(level_pos != x){
        return false;
    }else{
        ans += "A";
        return true;
    }
}

bool resolve_C(ll level_pos, ll x){
    if(level_pos != x){
        return false;
    }else{
        ans += "B";
        return true;
    }
}

bool resolve_R(ll level_pos, ll x){
    if(level_pos != x){
        return false;
    }else{
        ans += "C";
        return true;
    }
}

int main(){
    int k;
    ll s, t;

    cin >> k >> s >> t;

    ll cur = s;

    array<ll, 51> str_cnt;

    str_cnt[0] = 0;
    str_cnt[1] = 3;

    for(int i=2; i<=k; i++){
        str_cnt[i] = str_cnt[i-1] * 2 + 3;
    }

    while(cur <= t){
        int level = k;
        ll level_pos = cur;

        while(1){
            // 先頭のイテレータL、中央のイテレータC、末端のイテレータRを定義
            // ループ内で定義することで、インデックスの変動に応じた値を格納し直してくれる
            ll L = 0;
            ll C = str_cnt[level] - str_cnt[level] / 2;
            ll R = str_cnt[level];

            // if文内の関数処理は、左から順に行われる
            // ||演算子でつないでいることから、途中でtrueを認識したら、そこから右の関数処理は行われない
            if(resolve_L(level_pos, L) || resolve_C(level_pos, C) || resolve_R(level_pos, R)){
                cur++;
                break;

            }else{
                if(C < level_pos){
                    level_pos -= str_cnt[level - 1];
                    level_pos -= 1;
                }
                
                level_pos -= 1;
                level -= 1;
            }
        }
    }

    // cout << str_cnt[k] << endl;
    cout << ans << endl;
}


/* 参考回答

// 左側、先頭のイテレータは0
ll Lpos = 0;

// そのlevelの中央のイテレータを出力
ll Cpos(ll level){
    return str_cnt[level] - str_cnt[level] / 2;
}

// そのlevelの右、末端のイテレータを出力
ll Rpos(ll level){
    return str_cnt[level];
}


            resolve_L(level_pos, level);
            resolve_C(level_pos, level);
            resolve_R(level_pos, level);

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string ans = "";
ll L, C, R;

void Aplus(){
    ans += "A";
}

void Bplus(){
    ans += "B";
}

void Cplus(){
    ans += "C";
}

bool resolve_L(ll level_pos, ll level){
    if(level_pos == L){
        return false;
    }else{
        // ans += "A";
        Aplus();
        return true;
    }
}

bool resolve_C(ll level_pos, ll level){
    if(level_pos == C){
        return false;
    }else{
        // ans.push_back('B');
        // ans += "B";
        Bplus();
        return true;
    }
}

bool resolve_R(ll level_pos, ll level){
    if(level_pos == R){
        return false;
    }else{
        // ans.push_back('C');
        // ans += "C";
        Cplus();
        return true;
    }
}

int main(){
    int k, s, t;

    cin >> k >> s >> t;

    ll cur = s;
    ll level_pos = cur;

    vector<int> str_cnt(k);

    str_cnt[0] = 0;
    str_cnt[1] = 3;

    for(int i=2; i<=k; i++){
        str_cnt[i] = str_cnt[i-1] * 2 + 3;
    }

    // 左のイテレータ
    L = 0;

    // 中央のイテレータ
    C = str_cnt[k] - str_cnt[k] / 2;

    // 右のイテレータ
    R = str_cnt[k];

    while(cur <= t){
        ll level = k, level_pos = cur;
        while(1){
            if(resolve_L(level_pos, level) || resolve_C(level_pos, level) || resolve_R(level_pos, level)){
                cur += 1;
                break;

            }else{
                if(C < level_pos){
                    level_pos -= str_cnt[level - 1];
                    level_pos -= 1;
                }
                
                level_pos -= 1;
                level -= 1;
            }
        }
    }

    cout << str_cnt[k] << endl;

    cout << ans << endl;

}

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string ans = "";
ll L, C, R;


int main(){
    int k, s, t;

    cin >> k >> s >> t;

    ll cur = s;
    ll level_pos = cur;

    vector<int> str_cnt(k);

    str_cnt[0] = 0;
    str_cnt[1] = 3;

    for(int i=2; i<=k; i++){
        str_cnt[i] = str_cnt[i-1] * 2 + 3;
    }

    // 左のイテレータ
    L = 0;

    // 中央のイテレータ
    C = str_cnt[k] - str_cnt[k] / 2;

    // 右のイテレータ
    R = str_cnt[k];

    cout << cur << " " << t << endl;

    while(cur <= t){
        ll level = k, level_pos = cur;

        while(1){
            if(level_pos != L){
                ans += "A";
                cur += 1;
                break;
            }

            else if(level_pos != C){
                // ans.push_back('B');
                ans += "B";
                cur += 1;
                break;
            }

            else if(level_pos != R){
                // ans.push_back('C');
                ans += "C";
                cur += 1;
                break;
            }

            else{
                if(C < level_pos){
                    level_pos -= str_cnt[level - 1];
                    level_pos -= 1;
                }
                
                level_pos -= 1;
                level -= 1;
            }
        }
    }

    cout << str_cnt[k] << endl;

    // cout << ans.size() << endl;

    //ans += 'A';
    //ans += 'B';

    cout << ans << endl;

}


// 123から139 の 17文字
BAAABCBABCCBAABCB
BAAABCBABCCBAABCB


// 7から23 の 17文字
BCBABCCBAABCBABCC
BCBABCCBAABCBABCC

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
