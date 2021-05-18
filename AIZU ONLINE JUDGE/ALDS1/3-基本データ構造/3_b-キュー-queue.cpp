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
#include <bits/stdc++.h> 


*/

#include <stdio.h>
#include <string.h>
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

// headは先頭、tailは末尾のインデックスの指定に使う
int head, tail, n;

// キューに値を追加する関数enqueue
void enqueue(P x){
    // Q[tail]つまり、その時のQの末尾のインデックスを指定して、xを格納
    Q[tail] = x;
    // 格納後、tailの値をプラス1して、tailの指定先を調整する
    tail = (tail+1) % LEN;
}

// キューから値を排出する関数dequeue
P dequeue(){
    // Q[head]つまり、その時のQの一番先頭のインデックスを指定して、xに格納
    P x = Q[head];

    // 格納後、headの値をプラス1して、headの指定先を調整する
    head = (head+1) % LEN;
    return x;
}

// 最小値を返す
int min(int a, int b){
    // 下は、「?」を使うことで、簡易なif文を作成している
    //「a<b」が成立した場合は「a:b」のa、未成立ならbを返す
    return a<b ? a:b;
}

int main(){
    int elpas = 0, c;
    int i, q;
    P u;
    scanf("%d %d", &n, &q);

    // 全てのプロセスをキューに順番に追加する
    for(i=1; i<=n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }

    // 上の追加方式に合わせて、headは0ではなく1となっている
    head = 1;

    // tailは、追加されたデータ総数にプラス1した値となっている
    tail = n + 1;

    // シミュレーション
    // headとtailの値が異なる限り、ループする
    while(head != tail){
        u = dequeue();

        // 処理できる最大時間のqか、必要な時間u.tのうち、少ない時間でできる方の処理を行う
        c = min(q, u.t); 

        // 残りの必要時間を計算
        // (minがqの場合は、その時指定されていたプロセスが終わらなかったことを意味するため、またキューの末尾に追加して処理待ちする)
        u.t -= c; 

        // 処理を行った合計時間を表すelpasに加算
        elpas += c; 

        // 処理が完了していなければ(=そのプロセスのu.tが0より小さくなっていなければ)キューに追加
        if(u.t > 0){
            enqueue(u);
        }else{
            // 処理が終わっていたら、そのプロセスの名前とその時の処理合計時間elpasを出力
            printf("%s %d\n", u.name, elpas);
        }
    }
}

/* 参考回答

*/