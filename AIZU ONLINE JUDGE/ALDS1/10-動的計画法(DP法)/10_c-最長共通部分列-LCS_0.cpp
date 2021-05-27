/* sample input
3
abcbdab
bdcaba
abc
abc
abc
bc

12
a
a
bbb
bbb
aba
bbaba
abababbbaa
bbabaabba
a
aaaaa
aizojfeiz
aaaizojifeizz
zzyiioxizu
zzsyoizuo
iooooioiooiio
ooiiioioiooooiioio
ajfoaooieellzljieoaelj
ajoiiffoaolliseellzljieoaelj
zzzzzyyzyy
zzyyyyz
abcdef
fedcba
abc
xyz
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int N = 1000;

int lcs(string X, string Y){
    int c[N+1][N+1];
    int m = X.size();
    int n = Y.size();
    int maxl = 0;

    X = ' ' + X; // X[0]に空白を挿入
    Y = ' ' + Y; // Y[0]に空白を挿入

    for(int i=1; i<=m; i++) c[i][0] = 0;
    for(int j=1; j<=n; j++) c[0][j] = 0;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(X[i] == Y[j]){
                c[i][j] = c[i-1][j-1] + 1;
            }else{
                c[i][j] = max(c[i-1][j], c[i][j-1]);
            }

            maxl = max(maxl, c[i][j]);
        }
    }

    return maxl;
}

int main(){
    int n;
    cin >> n;

    string s1[n], s2[n];

    for(int i=0; i<n; i++){
        cin >> s1[i] >> s2[i];
    }

    for(int i=0; i<n; i++){
        cout << lcs(s1[i], s2[i]) << endl;
    }

}

/* 参考回答
int main(){
    int n;
    cin >> n;

    string s1[n], s2[n];

    rep(i, n){
        cin >> s1[i] >> s2[i];
    }

    for(int i=0; i<n; i++){
        cout << lcs(s1[i], s2[i]) << endl;
    }

}

int main(){
    int n;
    cin >> n;

    string s1, s2;

    for(int i=0; i<n; i++){
        cin >> s1;
        cin >> s2;

        cout << lcs(s1, s2) << endl;
    }

    return 0;
}
*/