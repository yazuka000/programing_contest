/* sample input
5
70 80 100 90 20
3
80 80 80
0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
	while(true){
		// 初期値定義
		int n;
		double st[1001]={0}, sum=0, a=0;

		// 処理定義
		cin >> n;
		if(n == 0) break;
		for(int i=0; i<n; i++){
			cin >> st[i];
			sum+=st[i];
		}
		for(int i=0;i<n;i++){
			a+=((sum/n)-st[i])*((sum/n)-st[i])/n;
		}

	// 出力定義
	// sqrtを使えば、2乗している値の平方根を出力することで、2乗する前の値を求められる
		printf("%.5f\n",sqrt(a));
	}
    return 0;
}


/*
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int n;
	double students[1000] = {0},sum,m,div;

	while(true){
		scanf("%d",&n);
		if(n == 0) break;
		div = sum = 0;
		for(int i = 0; i < n; i++){
			scanf("%lf",&students[i]);
			sum += students[i];
		}
		m = sum/n;
		for(int i = 0; i < n;i++){
			div += (students[i] - m)*(students[i] - m);
			students[i] = 0;
		}
		printf("%.8lf\n",sqrt(div/n));
	}
}
*/

/*
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n!=0){
		int i;
		double s[1000]={},sum=0,a=0;
	for(i=0;i<n;i++){
		cin >> s[i];
		sum+=s[i];
    }
	for(i=0;i<n;i++){
		a+=((sum/n)-s[i])*((sum/n)-s[i])/n;
	}
	printf("%.5f\n",sqrt(a));
	cin >> n;
}

return 0;
}
*/