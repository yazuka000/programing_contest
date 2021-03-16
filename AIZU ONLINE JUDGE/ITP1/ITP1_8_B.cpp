/* sample input
123
55
1000
0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int sum = 0;
	char ch;

    // 処理・出力定義
	while(true){
		while((ch = getchar()) != '\n'){
			sum += ch - '0';
		}
		if(sum == 0){
			break;
		}else{
			cout << sum << endl;
		}
		sum = 0;
	}
    
    return 0;
}

/*
#include <stdio.h>

int main(){
	int sum = 0;
	char ch;

	while(true)
	{
		while((ch = getchar()) != '\n'){
			sum += ch - '0';
		}
		if(sum == 0)
			break;
		else{
			printf("%d\n",sum);
			sum = 0;
		}
	}
}
*/