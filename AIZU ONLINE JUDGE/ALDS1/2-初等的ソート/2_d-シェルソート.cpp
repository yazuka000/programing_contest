/* sample input
5
5
1
4
3
2

3
3
2
1


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll cnt;
int l;
int A[1000000];
int n;
vector<int> G;

// 間隔gを指定した挿入ソート
void insertionSort(int A[], int n, int g){
    for(int i=g; i<n; i++){
        int v = A[i];
        int j = i-g;
        while(j>=0 && A[j]>v){
            A[j+g] = A[j];
            j -= g;
            cnt++;
        }
        A[j+g] = v;
    }
}

// シェルソート
void shellSort(int A[], int n){
    // 数列Gを生成している体
    for(int h=1; ;){
        if(h > n) break;
        G.push_back(h);
        h = 3*h + 1;
    }

    for(int i=G.size()-1; i>=0; i--){ // 逆順にG[i] = g を指定
        insertionSort(A, n, G[i]);
    }
}

int main(){
    cin >> n;

    // より素早く入力できるscanfを採用
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    cnt = 0;

    shellSort(A, n);

    cout << G.size() << endl;

    for(int i=G.size()-1; i>=0; i--){
        printf("%d", G[i]);
        if(i) printf(" ");
    }
    printf("\n");
    printf("%lld\n", cnt);

    for(int i=0; i<n; i++) printf("%d\n", A[i]);

}

/* 参考回答

*/