#include <bits/stdc++.h> 
using namespace std;

int main() {
    int a;
    cin >> a;
    int i, x;
    for (i=3;i<=a;i++){
        x = i;
    if (x % 3 == 0){
        cout << " " << i;
    } else {
        while(x){
            if (x % 10 == 3){
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    }
    cout << endl;
    return 0;
}