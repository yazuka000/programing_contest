/* sample
5 9
0 0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, x, sum;

	while(true){
		cin >> n >> x;
		if(n == 0 && x == 0) break;
		sum = 0;

		for(int i=1; i < x/3 && i <= n-2; i++){
			for(int j=i+1; j < x - (i+j) && j <= n-1; j++){
				if(x-(i+j) <= n){
					sum++;
				}
			}
		}
		cout << sum << endl;
	}
	
    return 0;
}







/*
#include <stdio.h>

int main(){
	int n,x,count;
	while(true){
		scanf("%d %d",&n,&x);
		if(n == 0 && x == 0) break;
		count = 0;
		for(int min = 1; min < x/3 && min <= n-2;min++){
			for(int middle = min+1;middle < x - (min+middle) && middle <= n-1; middle++){
				if(x-(min+middle) <= n) count++;
			}
		}
		printf("%d\n",count);
	}

}
*/