/* sample input
3 4
5 6
3 3
0 0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int H, W;

    // 処理定義
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;

        for(int i=1; i<=H; i++){
            for(int x=1; x<=W; x++){
                // 出力定義
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