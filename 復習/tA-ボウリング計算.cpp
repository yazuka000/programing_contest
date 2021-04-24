/* sample input
10 10 18
3 4 G 1 8 2 6 2 10 2 7 G 10 10 10 9 1 3

15 5 24
5 5 5 4 G 1 G 5 3 2 1 4 4 G G 1 5 5 5 2 1 5 3 1
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // フレーム数a、ピン数b、ボールを投げた回数n
    int a, b, n, m, subsum, sum=0, frame=0;
    string str;
    cin >> a >> b >> n;
    // 2行目では各投球で倒したピンの本数を表すn個の値p_1, p_2, ..., p_nが半角スペース区切り
    vector<int> result(a*2);

    // 入力
    rep(i, a*2+1){
        cin >> str;
        if(str=="G"){
            result[i]=0;
            continue;
        }

        int num=stoi(str);
        if(num==b && i%2==0){
            result[i]=num;
            i++;
        }else{
            result[i]=num;
        }
    }

    rep(i, a*2+1){
        cout << result[i] << " ";
    }
    cout << endl;

    // 処理
    for(int i=0; i<a*2+1; i++){
        // スペアだった場合
        if(result[i]+result[i+1]==b){
            sum+=result[i]+result[i+2];
            cout << sum << endl;
            continue;
        }

        // ストライクだった場合
        if(result[i]==b && i%2==0){
            sum+=result[i]+result[i+2];
            continue;
        }
        
        // それ以外
        sum+=result[i];
        cout << sum << endl;
    }
    
    // 出力
    cout << sum << endl;
}

/* 参考回答
    rep(i, a*2+1){
        cout << result[i] << " ";
    }

            sum+=result[i]+result[i+1]+result[i+2];

    rep(i, n){
        cout << result[i] << endl;
    }

    // 処理
    rep(i, n){
        sum+=result[i];
    }

    // 出力
    cout << sum << endl;


        // ストライクだった場合
        if(result[i+1]==b){
            subsum=0;
            m=0;
            while(result[i+1+m]==b){
                subsum+=result[i+1+m];
                cout << subsum << endl;
                m++;
            }
            sum+=subsum;
        }

    for(int i=0; i<n; i++){
        // スペアだった場合
        if(result[i]+result[i+1]==b){
            sum+=result[i]+result[i+1]+result[i+2];
            // cout << sum << endl;
            continue;
        }

        // ストライクだった場合
        if(result[i]==b){
            subsum=0;
            m=0;
            while(result[i+m]==b){
                subsum+=result[i+m];
                //cout << subsum << endl;
                m++;
            }
            sum+=subsum;
            cout << sum << endl;
            continue;
        }
        
        // それ以外
        sum+=result[i];
        cout << sum << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            // スペアだった場合
            if(result[i]+result[i+j]==b){
                sum+=result[i]+result[i+1]+result[i+2];
                // cout << sum << endl;
                break;
            }

            // ストライクだった場合
            if(result[i+j]==b){
                subsum=0;
                m=0;
                while(result[i+m]==b){
                    subsum+=result[i+m];
                    //cout << subsum << endl;
                    m++;
                }
                sum+=subsum;
                // cout << sum << endl;
                break;
            }
            
            // それ以外
            sum+=result[i+j];
            // cout << sum << endl;
        }
    }

for(int i=0; i<n; i++){
        // スペアだった場合
        if(result[i]+result[i+1]==b){
            sum+=result[i]+result[i+2];
            cout << sum << endl;
            continue;
        }

        // ストライクだった場合
        if(result[i]==b){
            sum+=result[i]+result[i+1]+result[i+2];
            continue;
        }
        
        // それ以外
        sum+=result[i];
        // if(i%2==0) frame++;
        cout << sum << endl;
    }
*/