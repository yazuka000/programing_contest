/* sample input
insert 8
insert 2
extract
insert 10
extract
insert 11
extract
extract
end

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MAX 2000000
#define INFTY (1<<30)

int H, A[MAX+1];

void maxHeapify(int i){
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;

    // 左の子、自分、右の子で値が最大のノードを選ぶ
    if(l <= H && A[l] > A[i]) largest = l;
    else largest = i;

    if(r <= H && A[r] > A[largest]) largest = r;

    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int extract(){
    int maxv;

    if(H < 1) return -INFTY;

    maxv = A[1];
    A[1] = A[H--];

    maxHeapify(1);

    return maxv;
}

void increaseKey(int i, int key){
    if(key < A[i]) return;

    A[i] = key;

    while(i > 1 && A[i / 2] < A[i]){
        swap(A[i], A[i / 2]);
        i = i / 2;
    }
}

void insert(int key){
    H++;
    A[H] = -INFTY;

    increaseKey(H, key);
}

int main(){
    int key;
    char com[10];

    while(1){
        scanf("%s", com);

        if(com[0] == 'e' && com[1] == 'n') break;

        if(com[0] == 'i'){
            scanf("%d", &key);
            insert(key);

        }else{
            printf("%d\n", extract());
        }
    }

}

/* 参考回答

*/