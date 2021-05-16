/* sample input
5
H4 C9 S4 D2 C3

2
S1 H1


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// トランプのカードを表す構造体
// suitはトランプのマーク、valueは数値を表す
struct Card {char suit, value;};

// バブルソート
// バブルソートは、常に結果が安定している
void bubble(struct Card A[], int N){
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=i+1; j--){
            if(A[j].value < A[j-1].value){
                Card t = A[j];
                A[j] = A[j-1];
                A[j-1] = t;
            }
        }
    }
}

// 選択ソート
// 選択ソートは、ソート対象によって結果が安定しないことがある
void selection(struct Card A[], int N){
    for(int i=0; i<N; i++){
        int minj = i;
        for(int j=i; j<N; j++){
            if(A[j].value < A[minj].value) minj = j;
        }
        Card t = A[i];
        A[i] = A[minj];
        A[minj] = t;
    }
}

// 出力のための関数
void print(struct Card A[], int N){
    for(int i=0; i<N; i++){
        if(i>0) cout << " ";
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

// バブルソートと選択ソートの結果を比較し、ソートが安定しているかどうかを判定する
// 「ソートが安定している」とは、異なるソートを同じ配列に行い、ソート後の結果が等しいかどうかを指している
bool isStable(struct Card C1[], struct Card C2[], int N){
    for(int i=0; i<N; i++){
        if(C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main(){
    Card C1[100], C2[100];
    int N;
    char ch;

    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> C1[i].suit >> C1[i].value;
    }

    for(int i=0; i<N; i++) C2[i] = C1[i];

    bubble(C1, N);
    selection(C2, N);

    print(C1, N);
    cout << "Stable" << endl;


    print(C2, N);

    if(isStable(C1, C2, N)){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }

}

/* 参考回答

*/