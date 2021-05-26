/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    char com[20];

    // 標準ライブラリ prirority_queue を使用
    priority_queue<int> PQ;

    while(1){
        scanf("%s", com);

        if(com[0] == 'i'){
            int key;
            scanf("%d", &key); // cinより高速なscanfを使用
            PQ.push(key);

        }else if(com[1] == 'x'){
            printf("%d\n", PQ.top());
            PQ.pop();

        }else if(com[0] == 'e'){
            break;
        }
    }
    
}

/* 参考回答

*/