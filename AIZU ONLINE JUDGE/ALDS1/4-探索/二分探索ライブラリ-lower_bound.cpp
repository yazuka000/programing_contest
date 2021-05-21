/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int A[14] = {1,1,2,2,2,4,5,5,6,8,8,8,10,15};
    int *pos;
    int idx;

    // lower_boundは、範囲と指定要素を記述し、指定要素「以上」で最初の要素を返す(指定要素を含める)
    // lower_boundは(配列名, 配列名+配列の要素数, 指定要素)と書く
    
    // upper_boundは、範囲と要素の指定の仕方は変わらないが、返す要素は指定要素「よりも大きい」最初の要素を返す(指定要素は含まれない)

    pos = lower_bound(A, A+14, 3);
    idx = distance(A, pos);

    cout << "A[" << idx << "] = " << *pos << endl; // A[5] = 4

    pos = lower_bound(A, A+14, 2);
    idx = distance(A, pos);

    cout << "A[" << idx << "] = " << *pos << endl; // A[2] = 2
}

/* 参考回答

*/