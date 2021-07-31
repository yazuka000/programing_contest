/* sample input
7777

0112

9012


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s;
    int pas[4];

    // 入力
    cin >> s;

    // 処理
    rep(i, 4){
        pas[i] = s[i] - '0';
    }

    if((pas[0] == 8 && pas[1] == 9 && pas[2] == 0) || 
    (pas[0] == 9 && pas[1] == 0 && pas[2] == 1) || 
    (pas[0] == 0 && pas[1] == 1 && pas[2] == 2) || 
    (pas[0] == 1 && pas[1] == 2 && pas[2] == 3) || 
    (pas[0] == 2 && pas[1] == 3 && pas[2] == 4) || 
    (pas[0] == 3 && pas[1] == 4 && pas[2] == 5) || 
    (pas[0] == 4 && pas[1] == 5 && pas[2] == 6) || 
    (pas[0] == 5 && pas[1] == 6 && pas[2] == 7) || 
    (pas[0] == 6 && pas[1] == 7 && pas[2] == 8) || 
    (pas[0] == 7 && pas[1] == 8 && pas[2] == 9) || 
    (pas[0] == pas[1] && pas[1] == pas[2] && pas[2] == pas[3])){
        cout << "Weak" << endl;
        return 0;
    }else{
        cout << "Strong" << endl;
        return 0;
    }
}

/* 参考回答
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	char a[5];
	for (int i = 0; i < 5; i++)a[i] = 0;
	cin >> a;
	bool same = true;
	bool step = true;
	for (int i = 0; i < 3; i++) {
		if (a[i] != a[i + 1])same = false;
		if (((a[i] + 1) % 10) != (a[i + 1] % 10))step = false;
	}
	if (same || step)cout << "Weak" << endl;
	else cout << "Strong" << endl;
	return 0;
}


*/