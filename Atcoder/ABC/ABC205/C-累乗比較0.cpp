/* sample input
3 2 4

-7 7 2

-8 6 3


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int a, b, c;
    cin >> a >> b >> c;

    if(!(a < 0 && c%2 != 0)){
        a = abs(a);
    }
    
    if(!(b < 0 && c%2 != 0)){
        b = abs(b);
    }
    

    if(a < b) cout << "<" << endl;
    else if(a > b) cout << ">" << endl;
    else cout << "=" << endl;

}

/* 参考回答
   cout << a << " " << b << endl;

   
*/