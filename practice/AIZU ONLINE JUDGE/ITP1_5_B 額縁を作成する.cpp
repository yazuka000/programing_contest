#include <bits/stdc++.h> 
using namespace std;

int main() {
    int H, W;
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        int i, x;
        for(i=1;i<=H;i++){
            for(x=1;x<=W;x++){
                if(i == 1 || i == H){
                    cout << "#";
                }else if(x == 1 || x == W){
                    cout << "#";
                }else {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}