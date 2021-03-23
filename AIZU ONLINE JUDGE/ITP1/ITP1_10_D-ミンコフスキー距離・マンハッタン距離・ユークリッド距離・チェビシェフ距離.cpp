/* sample input
3
1 2 3
2 0 4
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
	// 初期値定義
	int d,i;
	cin >> d;
	double a[1000]={},b[1000]={};

	// 処理定義
	for(i=0;i<d;i++) cin >> a[i];
	for(i=0;i<d;i++) cin >> b[i];

	double o1=0,o2=0,o3=0,oe=0;
	for(i=0;i<d;i++){

		// fabsで値の絶対値が求められる

		// マンハッタン距離の公式
		o1+=fabs(a[i]-b[i]);

		// ユークリッド距離の公式
		o2+=fabs(a[i]-b[i])*fabs(a[i]-b[i]);

		// 
		o3+=fabs(a[i]-b[i])*fabs(a[i]-b[i])*fabs(a[i]-b[i]);

		// チェビシェフ距離
		oe=max(oe,fabs(a[i]-b[i]));
	}
	
	// 出力定義
	printf("%.6f\n",o1);
	printf("%.6f\n",sqrt(o2));
	printf("%.6f\n",pow(o3,1.0/3.0));
	printf("%.6f\n",oe);

	return 0;
}


/*
#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
	int n;
	double x[100] = {0},y[100] = {0},p_1 = 0,p_2 = 0,p_3 = 0,p_infinity = -1;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) scanf("%lf",&x[i]);
	for(int i = 0; i < n; i++) scanf("%lf",&y[i]);

	for(int i = 0; i < n; i++){
		p_1 += abs(x[i] - y[i]);
		p_2 += (x[i] - y[i])*(x[i] - y[i]);
		p_3 += abs((x[i] - y[i])*(x[i] - y[i])*(x[i] - y[i]));
		p_infinity = (p_infinity >= abs(x[i] - y[i]))? p_infinity:abs(x[i] - y[i]);
    }
	printf("%.6lf\n",p_1);
	printf("%.6lf\n",sqrt(p_2));
	printf("%.6f\n",cbrt(p_3));
	printf("%.6lf\n",p_infinity);

}
*/

/*
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
	int d,i,j,k;
	cin >> d;
	double a[1000]={},b[1000]={};

	for(i=0;i<d;i++) cin >> a[i];
	for(i=0;i<d;i++) cin >> b[i];

	double o1=0,o2=0,o3=0,oe=0;
	for(i=0;i<d;i++){
		o1+=fabs(a[i]-b[i]);
		o2+=fabs(a[i]-b[i])*fabs(a[i]-b[i]);
		o3+=fabs(a[i]-b[i])*fabs(a[i]-b[i])*fabs(a[i]-b[i]);
		oe=max(oe,fabs(a[i]-b[i]));
	}
	
	printf("%.6f\n",o1);
	printf("%.6f\n",sqrt(o2));
	printf("%.6f\n",pow(o3,1.0/3.0));
	printf("%.6f\n",oe);

	return 0;
}
*/