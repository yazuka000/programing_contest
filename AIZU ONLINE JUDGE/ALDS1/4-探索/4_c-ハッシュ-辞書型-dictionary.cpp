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

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

// 文字から数値に変換
int getChar(char ch){
    if(ch == 'A') return 1;
    else if(ch == 'C') return 2;
    else if(ch == 'G') return 3;
    else if(ch == 'T') return 4;
    else return 0;
}

// 文字列から数値へ変換してkeyを生成する
long long getKey(char str[]){
    ll sum = 0, p = 1, i;

    for(i=0; i<strlen(str); i++){
        sum += p*(getChar(str[i]));
        p *= 5;
    }

    return sum;
}

int h1(int key){return key % M; }
int h2(int key){return 1 + (key % (M-1)); }


int find(char str[]){
    ll key, i, h;
    key = getKey(str); // 文字列を数値に変換

    for(i=0; ; i++){
        h = (h1(key) + i * h2(key)) % M;

        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h]) == 0) return 0;
    }

    return 0;
}

int insert(char str[]){
    ll key, i, h;
    key = getKey(str); // 文字列を数値に変換

    for(i=0; ; i++){
        h = (h1(key) + i * h2(key)) % M;

        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h]) == 0){
            strcpy(H[h], str);
            return 0;
        }

    }

    return 0;
}

int main(){
    int i, n, h;
    char str[L], com[9];

    for(i=0; i<M; i++) H[i][0] = '\0';

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s %s", com, str); // より高速な入力scanfを使用

        if(com[0] == 'i'){
            insert(str);
        }else{
            if(find(str)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }

    return 0;
}

/* 参考回答

*/