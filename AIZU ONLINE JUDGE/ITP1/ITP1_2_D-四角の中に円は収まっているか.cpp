/*　問題内容
長方形の中に円が含まれるかを判定するプログラムを作成してください。次のように、長方形は左下の頂
点を原点とし、右上の頂点の座標 (W,H)(W,H) が与えられます。また、円はその中心の座標 (x,y)(x,y) と半径 r で 与えられます。
*/

/* 制約・条件
−100≤　x,y　≤100
0<　W,H,r　≤100
*/

// sample input: 5 4 2 2 1


#include <bits/stdc++.h> 
using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if ((x - r < 0 || y - r < 0) || (x + r > W || y + r > H)){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}

/* 参考回答

#include <stdio.h>

using namespace std;

int main(){
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if((x >= r && x <= W-r) && (y >= r && y <= H-r))
		printf("Yes\n");
	else{
		printf("No\n");
	}
}
*/