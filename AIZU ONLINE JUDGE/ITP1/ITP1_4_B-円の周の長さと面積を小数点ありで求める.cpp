/* sample input
3
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
    // 初期値定義
    double r, men, syu;
    cin >> r;

    // 処理定義
    // M_PIで、円周率を呼び出せる
    syu = r * 2 * M_PI;
    men = pow(r, 2) * M_PI;

    // 出力定義
    printf("%.6f %.6f\n",men, syu);
    // cout << fixed << setprecision(6) << men << " " << syu << endl;

	return 0;
}

/* 参考回答
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double r;
    cin >> r;
    double pi=3.141592653589793238;
    printf("%.6f %.6f\n",r*r*pi,2*r*pi);
    return 0;
}
*/