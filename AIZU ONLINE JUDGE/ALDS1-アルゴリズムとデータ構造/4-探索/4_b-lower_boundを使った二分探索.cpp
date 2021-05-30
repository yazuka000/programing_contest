/* sample input
5
1 2 3 4 5
3
3 4 1

3
1 2 3
1
5

5
1 1 2 2 3
2
1 2
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int A[1000000], n;

int main(){
    cin >> n;
    for(int i=0; i<n; i++) scanf("%d", &A[i]);

    int q, k, sum = 0;
    cin >> q;
    for(int i=0; i<q; i++){
        scanf("%d", &k);

        // 標準ライブラリのlower_boundを使用
        if(*lower_bound(A, A+n, k) == k) sum++;

    }

    cout << sum << endl;

}

/* 参考回答

*/