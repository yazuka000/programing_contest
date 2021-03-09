#include <bits/stdc++.h> 
using namespace std;

int main() {
    int a, b;
    while(true){
    cin >> a >> b;
    if(a == 0 && b == 0) break;

    int i, x;
    for(i=0;i<a;i++){
        for(x=0;x<b;x++){
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    }
    return 0;
}