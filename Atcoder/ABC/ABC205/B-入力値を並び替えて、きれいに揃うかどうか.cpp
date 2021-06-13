/* sample input
5
3 1 2 4 5

6
3 1 4 1 5 2

3
1 2 3

1
1


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n;
    cin >> n;

    map<int, int> mp; 

    rep(i, n){
        int x;
        cin >> x;

        if(mp[x] == 1){
            cout << "No" << endl;
            return 0;
        }
        
        mp[x] = 1;
    }

    cout << "Yes" << endl;
    return 0;

}

/* 参考回答

*/