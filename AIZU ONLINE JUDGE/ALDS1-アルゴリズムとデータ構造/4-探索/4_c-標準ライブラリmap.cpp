/* sample input
6
insert AAA
insert AAC
find AAA
find CCC
insert CCC
find CCC

13
insert AAA
insert AAC
insert AGA
insert AGG
insert TTT
find AAA
find CCC
find CCC
insert CCC
find CCC
insert T
find TTT
find T
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    char str[10], com[13];

    // 標準ライブラリ map を使用
    map<string, bool> T;

    cin >> n;
    for(int i=0; i<n; i++){
        scanf("%s%s", com, str);

        if(com[0] == 'i') T[string(str)] = true;
        else{
            if(T[string(str)]) printf("yes\n");
            else printf("no\n");
        }
    }

}

/* 参考回答

*/