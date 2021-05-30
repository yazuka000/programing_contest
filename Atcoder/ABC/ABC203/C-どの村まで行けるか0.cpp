/* sample input
2 3
2 1
5 10

5 1000000000
1 1000000000
2 1000000000
3 1000000000
4 1000000000
5 1000000000

3 2
5 5
2 1
2 2
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)



int main(){
    // 初期値
    // 所持金k円、友人はn人
    long long int k, n, A, B;
    cin >> n >> k;

    // i人目の友達は村Aiに居て、Bi円を渡してくれる、
    for(k ==)


    // 出力
    cout << a << endl;
}

/* 参考回答
#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n;
	long long k;
	long long x, y;
	vector<pair<long long, long long> >a;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a.push_back({ x,y }); //a[i].first=A_i, a[i].second=B_i
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i].first > k)break;
		k += a[i].second;
	}
	cout << k << endl;
	return 0;
}


*/