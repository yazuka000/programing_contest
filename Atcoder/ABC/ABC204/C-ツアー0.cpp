/* sample input
3 3
1 2
2 3
3 2

3 0

4 4
1 2
2 3
3 4
4 1


*/

/* 実装方針
あり得る最大数は、n*mと一致する


*/

#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    // n個の都市と、m個の道路
    int n, m;
    cin >> n >> m;

    int cnt = n;

    vector<int> a(n), b(n);

    int dp[3000][3000] = {0};

    rep(i, m){
        cin >> a[i] >> b[i];

        dp[a[i]][a[i]] = 1;
    }
    

    // 処理
    rep(i, m){
        rep(j, m){
            if(dp[a[i]][b[j]] == 0){
                cnt++;
                dp[a[i]][b[j]] = 1;
            }
        }
    }

    // 出力
    cout << cnt << endl;
}

/* 参考回答
#include<bits/stdc++.h>
using namespace std;
const int MAX_N=2000;

vector<vector<int>>G;
bool temp[MAX_N];
void dfs(int v){
	if(temp[v])return;
	temp[v]=true;
	for(auto vv:G[v])dfs(vv);
}

int main(){
	int N,M;
	cin >> N >> M;
	G.resize(N);
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b;
		G[a-1].push_back(b-1);
	}

	int ans=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)temp[j]=false;
		dfs(i);
		for(int j=0;j<N;j++)if(temp[j])ans++;
	}
	
	cout << ans;
}


*/