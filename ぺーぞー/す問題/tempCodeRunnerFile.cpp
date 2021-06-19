#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string ans = "";

bool resolve_L(int level_pos, int x){
    if(level_pos != x){
        return false;
    }else{
        ans += "A";
        return true;
    }
}

bool resolve_C(int level_pos, int x){
    if(level_pos != x){
        return false;
    }else{
        ans += "B";
        return true;
    }
}

bool resolve_R(int level_pos, int x){
    if(level_pos != x){
        return false;
    }else{
        ans += "C";
        return true;
    }
}

int main(){
    ll k, s, t;

    cin >> k >> s >> t;

    int cur = s;

    array<ll, 50> str_cnt;

    str_cnt[0] = 0;
    str_cnt[1] = 3;

    for(int i=2; i<=k; i++){
        str_cnt[i] = str_cnt[i-1] * 2 + 3;
    }

    while(cur <= t){
        int level = k, level_pos = cur;

        while(1){
            // 先頭のイテレータL、中央のイテレータC、末端のイテレータRを定義
            // ループ内で定義することで、インデックスの変動に応じた値を格納し直してくれる
            int L = 0;
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