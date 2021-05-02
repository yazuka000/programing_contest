/* sample input
2
4 8

3
1 1 3

3
4 2 5

4
-100 -100 -100 -100
*/

/* 実装方針

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n; 
	
	vector <int> a(n); 
	
    // 入力値を合計していく
	int avg = 0; 
	for (int i = 0; i < n; i++){
        cin >> a[i];
        avg += a[i]; 
    }

    // cout << avg << endl;
	
    // 入力値の合計をround関数とnを使って、平均値をavgに代入
	avg = round((double)avg / n);
	

    // a[i]に入力された値に平均値avgを引いて2乗したものをresに足していく、それを要素の数だけ繰り返す
	int res = 0; 
	for (int i = 0; i < n; i++){
        res += (a[i] - avg) * (a[i] - avg); 
    }
	
    // cout << avg << endl;
	cout << res << endl; 
}


/* 参考回答
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n; 
	
	vector <int> a(n); 
	
	int avg = 0; 
	for (int i = 0; i < n; i++) cin >> a[i], avg += a[i]; 
	
	avg = round(double(avg) / n);
	
	int res = 0; 
	for (int i = 0; i < n; i++) res += (a[i] - avg) * (a[i] - avg); 
	
	cout << res << "\n"; 
}


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
int main()
{
    int N; cin >> N;
    int A[N]; 
    rep(i, N) cin >> A[i];
    ll minv = INT_MAX;
    for(int i=-100;i<=100;i++){
        ll cost = 0;
        rep(j,N){
            cost+=(i-A[j]) * (i-A[j]);
  //      cout << " cost " << cost << " minv " << minv << " i " << i  << " j " << j << " A " << A[j] << endl;            
        }
    //    cout << " cost " << cost << " minv " << minv << " i " << i  << endl;
        minv = min(minv, cost);
    }
    cout << minv << endl;

}


*/