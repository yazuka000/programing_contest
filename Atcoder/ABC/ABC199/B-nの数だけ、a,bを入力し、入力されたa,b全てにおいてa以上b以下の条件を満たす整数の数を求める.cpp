/* sample input
2
3 2
7 5

3
1 5 3
10 7 3

3
3 2 5
6 9 8
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int n, count=0, maxa=-10000, minb=10000;
    cin >> n;
    vector<int> a(n), b(n);

    // 入力
    rep(i, n){
        cin >> a[i];
    }

    rep(i, n){
        cin >> b[i];
    }

    // 処理
    for(int i=0; i<n; i++){
        maxa=max(maxa, a[i]);
        minb=min(minb, b[i]);
    }

    if(minb<maxa){
        cout << 0 << endl;
        return 0;
    }

    for(int i=maxa; i<=minb; i++){
        count++;
    }

    // 出力
    cout << count << endl;
}

/* 参考回答
#include <stdio.h>
#include <stdbool.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int n = ri();
	int a[n];
	for (int i = 0; i < n; i++) a[i] = ri();
	int b[n];
	for (int i = 0; i < n; i++) b[i] = ri();
	
	int res = 0;
	for (int i = 1; i <= 1000; i++) {
		bool ok = true;
		for (int j = 0; j < n; j++) if (i < a[j] || i > b[j]) ok = false;
		if (ok) res++;
	}
	
	printf("%d\n", res);
	return 0;
}



*/