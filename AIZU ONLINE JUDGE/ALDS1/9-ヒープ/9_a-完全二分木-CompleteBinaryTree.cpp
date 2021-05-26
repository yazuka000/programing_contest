/* sample input
5
7 8 1 2 3


*/

/* 実装方針
二分ヒープは、次の図のように、
木の各節点に割り当てられたキーが１つの配列の各要素に対応した完全二分木で表されたデータ構造です。
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MAX 100000

int parent(int i){ return i / 2; };
int left(int i){ return 2 * i; };
int right(int i){ return 2 * i + 1; };

int main(){
    int H, i, A[MAX+1]; // 1-オリジンのため、+1する

    cin >> H;
    for(i=1; i<=H; i++) cin >> A[i];

    for(i=1; i<=H; i++){
        cout << "node " << i << ": key = " << A[i] << ", ";

        if(parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
        if(left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
        if(right(i) <= H) cout << "right key = " << A[right(i)] << ", ";

        cout << endl;
    }

}

/* 参考回答

*/