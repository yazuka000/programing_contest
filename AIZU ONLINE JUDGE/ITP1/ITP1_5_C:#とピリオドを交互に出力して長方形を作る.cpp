/* sample input
3 4
5 6
3 3
2 2
1 1
0 0
*/
#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int H, W;

    // 処理定義
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        
        for(int i=1; i<=H; i++){
            for(int x=1; x<=W; x++){
                // 出力定義
                if(i % 2 != 0){
                    if(x % 2 != 0){
                        cout << "#";
                    }else {
                        cout << ".";
                    }
                } else if(i % 2 == 0){
                    if(x % 2 == 0){
                        cout << "#";
                    }else {
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

/* 参考回答
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int H,W;
	while(true){
		scanf("%d %d",&H,&W);
		if(H == 0 && W == 0) break;
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				if((i+j)%2 == 0) printf("#");
				else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
*/