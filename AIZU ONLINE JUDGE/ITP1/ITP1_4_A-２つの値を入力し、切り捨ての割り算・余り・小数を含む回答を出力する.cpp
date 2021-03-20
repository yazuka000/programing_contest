/* sample
3 2
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
    // 初期値定義
    int a, b, d, r;
    double f;
    cin >> a >> b;

    // 処理定義
    d = a / b;
    r = a % b;
    f = (double)a / b;

    // 出力定義
    printf("%d %d %.5f\n",d, r, f);

	return 0;
}

/* 参考回答
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    double fa=a,fb=b;

  //cout << (a/b) <<" "<<(a%b)<<" "<<(fa/fb)<<endl;
    printf("%d %d %.5f\n",(a/b),(a%b),(fa/fb));
    return 0;
}
*/