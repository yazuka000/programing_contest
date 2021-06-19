/* sample input
2019 5 1

1873 1 1

1911 11 11

1912 7 30
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 年月日そのままでは大変なので、数値化によって比較しやすくする
int date_to_numdate(int y, int m, int d) {
    return y * 10000 + m * 100 + d;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int numdate = date_to_numdate(y, m, d);

    string era;
    if (numdate <= date_to_numdate(1912, 7, 29)) {
        era = "明治";
    } else if (numdate <= date_to_numdate(1926, 12, 24)) {
        era = "大正";
    } else if (numdate <= date_to_numdate(1989,  1,  7)) {
        era = "昭和";
    } else if (numdate <= date_to_numdate(2019,  4, 30)) {
        era = "平成";
    } else {
        era = "令和";
    }
    cout << era << "年" << m << "月" << d << "日" << endl;
}

/* 参考回答
#include <iostream>
using namespace std;

int date_to_numdate(int y, int m, int d) {
    return y * 10000 + m * 100 + d;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int numdate = date_to_numdate(y, m, d);

    string era;
    if (numdate <= date_to_numdate(1912, 7, 29)) {
        era = "明治";
    } else if (numdate <= date_to_numdate(1926, 12, 24)) {
        era = "大正";
    } else if (numdate <= date_to_numdate(1989,  1,  7)) {
        era = "昭和";
    } else if (numdate <= date_to_numdate(2019,  4, 30)) {
        era = "平成";
    } else {
        era = "令和";
    }
    cout << era << "年" << m << "月" << d << "日" << endl;
}


#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int y, m, d;
    cin >> y >> m >> d;

    // 入力

    // 処理
    if(y<1912){
        cout << "明治";

    }else if(y<=1912){
        if(m<=7){
            if(d<=29){
                cout << "明治";
            }else{
                cout << "大正";
            }
        }else{
            cout << "大正";
        }

    }else if(y<=1926){
        if(m<=12){
            if(d<=24){
                cout << "大正";
            }else{
                cout << "昭和";
            }
        }else{
            cout << "昭和";
        }

    }else if(y<=1989){
        if(m<=1){
            if(d<=7){
                cout << "昭和";
            }else{
                cout << "平成";
            }
        }else{
            cout << "平成";
        }

    }else if(y<=2019 && m<=4 && d<=30){
        if(m<=4){
            if(d<=30){
                cout << "平成";
            }else{
                cout << "令和";
            }
        }else{
            cout << "令和";
        }

    }else{
        cout << "令和";
    }

    // 出力
    cout << "年" << m << "月" << d << "日" << endl;
}
*/