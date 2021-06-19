/* sample input
14
1 1 1 1 1 0 0 1 1 1 1 1 0 0

9
1 0 1 1 1 1 1 1 0

11
1 1 1 0 1 1 1 0 1 1 0

*/

/* 実装方針
配列に要素を全部入力する

配列を7要素ごとに区切って判定していく
(イテレータ、ポインターを活用)

7要素

最長連続日数を出力

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    vector<int> schedule(n, 0);
    rep(i, n) cin >> schedule[i];

    int ans = 0;

    // accumulateで、配列の指定要素の範囲を合計する
    // 下は、配列の先頭から7つ目の要素を範囲指定している
    // これが5以下なら週休2日とみなせる
    int sche7d = accumulate(schedule.begin(), schedule.begin() + 7, 0);

    // イテレータITERを定義し、ポインターの基準として使う
    // イテレータの定義を活用することで、周回処理ごとにポインターの起点や末尾をずらして特定の処理を行うことができる
    // 下記は、先頭から7つ目のインデックス番号をポインターの基準にしている
    auto ITER = schedule.begin() + 7;

    bool isContinue = false;
    int continueDays = 0;

    // 最初の7日間だけ別処理
    if(sche7d <= 5){
        isContinue = true;
        continueDays = 7;
    }

    // ITERが入力配列の末尾と同一にならない限り、周回処理する
    while(ITER != schedule.end()){

        // sche7dの範囲指定から、先頭の要素を削除している
        sche7d -= *(ITER - 7);

        // こちらは、ITERの次の要素を指定範囲に追加している
        sche7d += *ITER;
    
        // もし週休2日で働けていたら、連続記録を加算していく
        if(sche7d <= 5){

            if(isContinue){
                continueDays++;
            }else{
                continueDays = 7;
                isContinue = true;
            }

        // 週休2日じゃなかったら、最大日数をansに格納し、連続記録continueDaysに0を入れる
        }else{
            if(isContinue){
                isContinue = false;
                ans = max(ans, continueDays);
                continueDays = 0;
            }
        }

        // ITERをプラスし、次の要素を検索
        ITER++;
    }

    ans = max(ans, continueDays);

    cout << ans << endl;
    return 0;
}