/* sample input
1 + 2
56 - 18
13 * 2
100 / 10
27 + 81
0 ? 0
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a, b, ans;
    string op;
    while(true){
        cin >> a >> op >> b;
        if (op == "?") break;
        else if (op == "+"){
            cout << a+b << endl;
        }else if (op == "-"){
            cout << a-b << endl;
        }else if (op == "*"){
            cout << a*b << endl;
        }else if (op == "/"){
            cout << a/b << endl;
        }
    }
	return 0;
}