/* sample input
ooo???xxxx

o?oo?oxoxo

xxxxx?xxxo


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s;
    cin >> s;

    vector<int> num(10);

    // 入力


    // 処理

    // 出力
    
}

/* 参考回答
#include<bits/stdc++.h>
using namespace std;

int main(){

    string S; 
    cin >> S;
    int ans = 0;

    for(int i=0; i<=9999; i++){
        vector<bool> flag(10);
        int X = i;

        for(int j=0; j<4; j++){
            flag[X%10] = true;
            X /= 10;
        }

        bool flag2 = true;

        for(int j=0; j<10; j++){
            if(S[j]=='o' && !flag[j]) flag2 = false;
            if(S[j]=='x' && flag[j]) flag2 = false;
        }
        ans += flag2;
    }
    cout << ans << endl;
}


*/