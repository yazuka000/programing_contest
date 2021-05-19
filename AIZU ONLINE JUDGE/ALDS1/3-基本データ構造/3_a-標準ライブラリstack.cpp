/* sample input
1 2 +

1 2 + 3 4 - *
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    stack<int> S;
    int a, b, x;
    string s;

    while(cin >> s){
        if(s[0] == '+'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(a+b);

        }else if(s[0] == '-'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(b-a);

        }else if(s[0] == '*'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(a*b);

        }else{
            S.push(atoi(s.c_str()));
        }
    }

    cout << S.top() << endl;
}

/* 参考回答

*/