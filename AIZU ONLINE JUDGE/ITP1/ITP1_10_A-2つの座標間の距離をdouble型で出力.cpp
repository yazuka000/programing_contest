/* sample input
0 0 1 1
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    double x1, y1, x2, y2, ans;
    cin >> x1 >> y1 >> x2 >> y2;

    // 処理定義
	ans = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    // 出力定義
	printf("%.8lf\n",ans);
    
    return 0;
}



/*
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	double x1,y1,x2,y2;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	printf("%.8lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
*/