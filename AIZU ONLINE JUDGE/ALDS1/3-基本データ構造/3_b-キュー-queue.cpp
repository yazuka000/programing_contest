/* sample input
5 100
p1 150
p2 80
p3 200
p4 350
p5 20

11 10
a 10
b 20
c 5
d 12
e 30
f 9
g 20
h 100
i 10
j 20
k 10

解
a 10
c 25
f 54
i 84
k 104
b 114
d 116
g 136
j 156
e 166
h 246
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define LEN 100005

// プロセスを表す構造体
typedef struct pp{
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x){
    Q[tail] = x;
    tail = (tail+1) % LEN;
}

P dequeue(){
    P x = Q[head];
    head = (head+1) % LEN;
    return x;
}

int min(int a, int b){
    return a<b ? a:b;
}

int main(){
    int elpas = 0, c;
    int i, q;
    P u;
    scanf("%d %d", &n, &q);

    // 全てのプロセスをキューに順番に追加する
    for(i=1; i<=q; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }
    head = 1;
    tail = n + 1;

    // シミュレーション
    while(head != tail){
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elpas += c;

        if(u.t > 0){
            enqueue(u);
        }else{
            printf("%s %d\n", u.name, elpas);
        }
    }
}

/* 参考回答

*/