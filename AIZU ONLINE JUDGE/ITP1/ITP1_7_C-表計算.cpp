/* sample input
4 5
1 1 3 4 5
2 2 2 4 5
3 3 0 1 1
2 3 4 4 6
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
	// 初期値定義
    int r, c, sum, total_sum=0;
    cin >> r >> c;
	int table[r+1][c+1];

	for(int i=0; i<r+1; i++){
		for(int j=0; j<c; j++){
			table[i][j] = 0;
		}
	}


	// 処理定義
	for(int i=0; i<r; i++){
		sum = 0;
		for(int j = 0; j < c; j++){
			cin >> table[i][j];
			sum += table[i][j];
			table[r][j] += table[i][j];
		}
		table[i][c] = sum;
		total_sum += sum;
	}
	table[r][c] = total_sum;

	// 出力定義
	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c; j++){
			cout << table[i][j] << " ";
		}
		cout << table[i][c] << endl;
	}

    return 0;
}

/*
#include<iostream>
using namespace std;
int main(){
  int i,j,k;
  int r,c;
  int b;
  cin >> r >> c;
  int rsum[100]={};
  int csum[100]={};
  int sum=0;
  for(i=0;i<r;i++){
    cin >> b;
    cout << b;
    rsum[i]+=b;
    csum[0]+=b; 
    for(j=1;j<c;j++){
      cin >> b;
      cout <<" " << b;
      rsum[i]+=b;
      csum[j]+=b; 
    }
    cout << " " << rsum[i] << endl;
    sum+=rsum[i];
  }
  cout << csum[0];
  for(j=1;j<c;j++){
    cout << " " << csum[j];    
  }
  cout << " " << sum <<  endl;
  return 0;
}
*/

/*
#include <stdio.h>

using namespace std;

int main(){
	int r,c,sum,total_sum = 0;
	scanf("%d %d",&r,&c);
	int table[r+1][c+1];

	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c+1; j++){
			table[i][j] = 0;
		}
	}

	for(int i = 0; i < r; i++){
		sum = 0;
		for(int j = 0; j < c; j++){
			scanf("%d",&table[i][j]);
			sum += table[i][j];
			table[r][j] += table[i][j];
		}
		table[i][c] = sum;
		total_sum += sum;
	}
	table[r][c] = total_sum;

	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c; j++){
			printf("%d ",table[i][j]);
		}
		printf("%d\n",table[i][c]);
	}
}
*/