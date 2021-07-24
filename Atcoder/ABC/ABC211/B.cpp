/* sample input
3B
HR
2B
H

2B
3B
HR
3B


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    
    int H = 0, B2 = 0, B3 = 0, HR = 0;

    // 入力
    for(int i=0; i<4; i++){
        string s;
        cin >> s;

        if(s == "H") H++;
        else if(s == "2B") B2++;
        else if(s == "3B")  B3++;
        else if(s == "HR") HR++;


        if(H == 2 || B2 == 2 || B3 == 2 || HR == 2){
            cout << "No" << endl;
            return 0;
        }

        if(H == 1 && B2 == 1 && B3 == 1 && HR == 1) cout << "Yes" << endl;
    } 

}

/* 参考回答

*/