/* sample input
5
10 1 5 4 17
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
    // 初期値定義
    int n, b, mi=10000000, ma=-10000000;
    long long sum=0;
    cin >> n;

    // 処理定義
    for(int i=0; i<n; i++){
        cin >> b;
        mi=min(mi,b);
        ma=max(ma,b);
        sum+=b;
    }

    // 出力定義
    printf("%d %d %lld\n", mi, ma, sum);

    // cout << mi <<  " " << ma << " " << sum << endl;

    return 0;
}