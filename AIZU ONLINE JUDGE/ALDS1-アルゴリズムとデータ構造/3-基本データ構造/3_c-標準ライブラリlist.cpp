/* sample input
7
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5

9
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5
deleteFirst
deleteLast
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int q, x;
    char com[20];

    // 標準ライブラリのlistを使用
    list<int> v;

    scanf("%d", &q);

    for(int i=0; i<q; i++){
        scanf("%s", com);

        if(com[0] == 'i'){ // insert
            scanf("%d", &x);
            v.push_front(x);
        }else if(com[6] == 'L'){ // deleteLast
            v.pop_back();
        }else if(com[6] == 'F'){ // deleteFirst
            v.pop_front();
        }else if(com[0] == 'd'){ // deleteKey
            scanf("%d", &x);
            for(list<int>::iterator it = v.begin(); it != v.end(); it++){
                if(*it == x){
                    v.erase(it);
                    break;
                }
            }
        }
    }

    int i = 0;
    for(list<int>::iterator it = v.begin(); it != v.end(); it++){
        if(i++){
            printf(" ");
        }
        printf("%d", *it);
    }

    printf("\n");

}

/* 参考回答

*/