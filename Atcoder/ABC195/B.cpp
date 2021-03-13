#include <iostream>
using namespace std;

int main() {
    int A, B, W, kg, ma, mi, to;
    cin >> A >> B >> W;

    kg = W * 1000;

    
    int i, x;
    for(i=0;i<=1000;i++){
        for(x=0;x<=1000;x++){
            if(A * i + B * x == kg){
                to = i + x;
            }
            if(ma < to){
                ma = to;
            }
            if(mi > to){
                mi = to;
            }
            
        }
    }

    cout << mi << " " << ma << endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,w;
    cin >> a >> b >> w;

    int m=1e9,M=0;

    for(int n=1;n<=1000000;n++){
    if(a*n<=1000*w && 1000*w<=b*n){
        m=min(m,n);
        M=max(M,n);
    }
}
if(M==0)cout << "UNSATISFIABLE";
else cout << m << ' ' << M;
}


*/