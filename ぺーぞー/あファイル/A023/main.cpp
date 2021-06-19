#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> isWeekday(n, 0);
    for(int i = 0; i < n; i++) cin >> isWeekday[i];

    int ans = 0;

    int recent7days = accumulate(isWeekday.begin(), isWeekday.begin() + 7, 0);
    // これが5以下なら週休2日
    auto ITER = isWeekday.begin() + 7;

    bool isContinue = false;
    // bool previousFlag = false;
    int continueDays = 0;

    // 最初の7日間だけ別処理
    if(recent7days <= 5){
        isContinue = true;
        continueDays = 7;
    }

    while(ITER != isWeekday.end()){
        recent7days -= *(ITER - 7);
        recent7days += *ITER;
    //8日目を見る。　1日目を削除。

        if(recent7days <= 5){
            if(isContinue){
                continueDays++;
            }
            else{
                continueDays = 7;
                isContinue = true;
            }
        }
        else{
            if(isContinue){
                isContinue = false;
                ans = max(ans, continueDays);
                continueDays = 0;
            }
        }
        ITER++;
    }

    ans = max(ans, continueDays);

    cout << ans << endl;
    return 0;
}