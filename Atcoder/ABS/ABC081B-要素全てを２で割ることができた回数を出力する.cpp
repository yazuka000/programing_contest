/* sample input
3
8 12 40
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, count=0;
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    // 処理定義
    while(true){
        for(int i=0; i<n; i++){
            if(A[i] % 2 != 0){
                // 出力定義
                cout << count << endl;
                return 0;
            }
            A[i]/=2;
        }
        count++;
    }
}

/*
#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, count=0;
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cin >> A[i];
        // cout << A[i];
    }
    
    // 処理定義
    while(true){
        for(int i=0; i<n; i++){
            // cout << A[i] << endl;
            if(A[i] % 2 != 0){
                // 出力定義
                // cout << endl;
                // cout << A[i] << endl;
                cout << count << endl;
                return 0;
            }
            A[i]/=2;
        }
        count++;
    }
}
*/
