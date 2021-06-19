/* sample input
3 5
3 7 4 5 1
6 9 1 8 8
11 2 5 2 2
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int h, w, a, b;
    cin >> h >> w;
    int cho[h][w];
    int count[h];
    int sub[h];
    string ans[h][w];

    for(int i=0; i<h; i++){
        count[i]=0;
        sub[h]=0;
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> cho[i][j];
            count[i]+=cho[i][j];
            // cout << cho[i][j] << endl;
            // cout << count[i] << endl;
        }
        count[i]/=2;
    }

    // 処理定義
    for(int i=0; i<w-1; i++){
        for(int j=1; j<w; j++){
            sub[i]=cho[i];
            if(sub[i]==count[i]){
                
            }
        }
    }




    // 出力定義
    

    return 0;
}