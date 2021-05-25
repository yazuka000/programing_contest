/* sample input
9
0 1 4
1 2 3
2 -1 -1
3 -1 -1
4 5 8
5 6 7
6 -1 -1
7 -1 -1
8 -1 -1


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MAX 10000
#define NIL -1

struct Node { int p, l, r; };
struct Node T[MAX];

int n;

// 先行順巡回
void preParse(int u){
    if(u == NIL) return;

    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

// 中間順巡回
void inParse(int u){
    if(u == NIL) return;

    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

// 後行順巡回
void postParse(int u){
    if(u == NIL) return;

    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main(){
    int i, v, l, r, root;

    scanf("%d", &n);
    for(i=0; i<n; i++) T[i].p = NIL;

    for(i=0; i<n; i++){
        scanf("%d %d %d", &v, &l, &r);

        T[v].l = l;
        T[v].r = r;

        if(l != NIL) T[l].p = v;
        if(r != NIL) T[r].p = v;
    }

    for(i=0; i<n; i++) if(T[i].p == NIL) root = i;

    printf("Preorder\n");
    preParse(root);
    printf("\n");

    printf("Inorder\n");
    inParse(root);
    printf("\n");

    printf("Postorder\n");
    postParse(root);
    printf("\n");

}

/* 参考回答

*/