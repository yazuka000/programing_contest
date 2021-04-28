/* sample input
6 3
3 2
1 6
2 5

12 6
4 6
4 8
4 10
4 12
4 2
4 4
*/

/* 実装方針
空席状況を管理する変数 (配列がよいでしょう) を用意し、すべて空席としてマークしておきます。
グループが来店する度に、そのグループが座れるかどうかを判定します。
つまり、座席 b_i から連続する a_i 席がすべて空席となっているかどうかを確認します。
座れるなら、座席 b_i から連続する a_i 席を使用済みとしてマークします。座れないなら、何もしません。

座席 n と座席 1 が隣り合っていることに注意しましょう。
これをプログラム上で表現するには、n で割った剰余を用いるのがよいでしょう 

isu[(b+j)%n]==1

(詳しくは、各言語の実装例を参照してください)。
*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // n(座席数)とm(グループ数=入力数)
    // 整数a_i(グループの人数)とb_i(着席開始座席番号)
    int n, m, a, b, count=0;
    cin >> n >> m;

    vector<int> isu(n, 0);

    rep(i, m){
        cin >> a >> b;
        b--;
        bool valid=true;

        // このループで、座席の配列を全探索し、一つでも1があったらvalidをfalseとする
        rep(j, a){
            if(isu[(b+j)%n]==1){
                // isu[(b+j)%n]=1;
                valid=false;
            }
        }

        // validをtrueで保てた場合、countにaの値を加算する
        if(valid){
            count+=a;

        // validがtrueだったので、対象座席の配列に1を格納する
            rep(j, a){
                isu[(b+j)%n]=1;
                valid=false;
            }
        }
    }

    // 出力
    cout << count << endl;

    /*
    rep(i, n){
        cout << isu[i] << endl;
    }
    */
}

/* 参考回答
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int answer = 0;
    vector<bool> vacant(n, true);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        b--;
        bool valid = true;

        for(int j = 0; j < a; j++){
            if(!vacant[(b+j)%n]) valid = false;
        }

        if(valid){
            answer += a;
            for(int j = 0; j < a; j++){
                vacant[(b+j)%n] = false;
            }
        }

    }
    cout << answer << endl;
    return 0;
}
*/