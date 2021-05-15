/* sample input
5
5 3 2 4 1

6
5 2 4 6 1 3


*/

/* 実装方針
バブルソートはその名前が表すように、泡（Bubble）が水面に上がっていくように配列の要素が動いていきます。
バブルソートは次のようなアルゴリズムで数列を昇順に並び変えます。
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// flagを用いたバブルソート(昇順)
int bubbleSort(int A[], int N){
    // swはソート処理した回数
    int sw = 0;
    bool flag = 1;

    // flagが1の状態である場合、for文内の処理を行う
    for(int i=0; flag; i++){
        flag = 0;

        // 末尾の要素から、先頭に向かって要素交換していく
        // 末尾から先頭に上がっていくようにソートするため、バブルソートという
        for(int j=N-1; j>=i+1; j--){
            if(A[j] < A[j-1]){
                // 隣り合った要素を交換する
                swap(A[j], A[j-1]);
                flag = 1;
                sw++;
            }
        }
    }
    
    // 関数の結果を格納する場合、「return sw」の値を代入する
    return sw;
}

int main(){
    // 初期値
    int A[100], N, sw;
    cin >> N;

    for(int i=0; i<N; i++) cin >> A[i];

    sw = bubbleSort(A, N);

    for(int i=0; i<N; i++){
        if(i) cout << " ";
        cout << A[i];
    }

    cout << endl;
    cout << sw << endl;
}

/* 参考回答

*/