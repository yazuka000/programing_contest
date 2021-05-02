/* sample input

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b, c, d, e, count=0;

    for(int i=1; i<=5; i++){
        for(int j=i; j<=5; j++){
            for(int k=j; k<=5; k++){
                for(int l=k; l<=5; l++){
                    for(int m=l; m<=5; m++){
                        if(i+j+k+l+m<=9){
                            cout << i << " " << j << " " << k << " " << l << " " << m << endl;
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;
}

/* 参考回答
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            for(int k=1; k<=5; k++){
                for(int l=1; l<=5; l++){
                    for(int m=1; m<=5; m++){
                        if(i+j+k+l+m<=9){
                            cout << i << " " << j << " " << k << " " << l << " " << m << endl;
                            count++;
                        }
                    }
                }
            }
        }
    }
*/