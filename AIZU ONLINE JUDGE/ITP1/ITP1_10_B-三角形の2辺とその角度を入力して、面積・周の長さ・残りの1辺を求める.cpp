/* sample input
4 3 90
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    double a, b, c, degree, s;
    // cin >> a >> b >> degree;
	scanf("%lf %lf %lf",&a,&b,&degree);

    // 処理定義
	s = (0.5)*a*b*sin(M_PI*degree/180);
	c = sqrt(a*a+b*b-2*a*b*cos(M_PI*degree/180));

    // 出力定義
	printf("%.8lf\n",s);
	printf("%.8lf\n",a+b+c);
	printf("%.8lf\n",2*s/a);

    return 0;
}


/*
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,degree,S;
	scanf("%lf %lf %lf",&a,&b,&degree);
	S = (0.5)*a*b*sin(M_PI*degree/180);
	c = sqrt(a*a+b*b-2*a*b*cos(M_PI*degree/180));
	printf("%.8lf\n",S);
	printf("%.8lf\n",a+b+c);
	printf("%.8lf\n",2*S/a);
}
*/