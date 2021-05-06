/* sample input
erasedream

dreameraser

dreamerer
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s;
    string de[4]={"dream", "dreamer", "erase", "eraser"};
    cin >> s;

    reverse(s.begin(), s.end());

    rep(i, 4){
        reverse(de[i].begin(), de[i].end());
        // cout << de[i] << endl;
    }

    // cout << s << endl;

    bool ok=false, out=false;

    for(int i=0; i<s.size(); ){
        ok=false;
        for(int j=0; j<4; j++){
            if(s.substr(i, i-i+de[j].size()) == de[j]){
                i+=de[j].size();
                ok=true;
                if(i==s.size()){
                    out=true;
                }
                break;
            }

            if(j==3){
                out=true;
                break;
            }
        }

        if(out){
            break;
        }
    }

    // 出力
    if(ok){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

/* 参考回答

*/