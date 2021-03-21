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

		for(int i=1; i<=n-2; i++){
			for(int j=i+1; j<=n-1; j++){
				for(int k=j+1; k<=n; k++){
					if(i+j+k == x){
						sum++;
					}
				}
			}
		}
		cout << sum << endl;
	}
	
    return 0;
}


/*
#include <iostream>
using namespace std;
int main(){
  int n,x;
  cin >> n >> x;
  while(n!=0||x!=0){
    int i,j,k;
    int o=0;
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
	for(k=j+1;k<=n;k++){
	  if(i+j+k==x) o++;
	}
      }
    }
    cout << o << endl;
    cin >> n >> x;
  }
  return 0;
}
*/




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