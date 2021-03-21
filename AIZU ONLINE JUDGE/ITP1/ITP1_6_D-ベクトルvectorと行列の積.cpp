/* sample
3 4
1 2 0 1
0 3 0 1
4 1 1 0
1
2
3
0
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
	// 初期値定義
	int n,m;
	int mat[100][100]={{}};
	int ve[100]={};
	cin >> n >> m;

	// 処理定義
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> mat[i][j];
		}
	}

	for(int j=0; j<m; j++){
		cin >> ve[j];
	}
	
	for(int i=0; i<n; i++){
		int x=0;
		for(int j=0; j<m; j++){
			x+=mat[i][j]*ve[j];	
		}
		// 出力定義
		cout << x << endl;
	}

	return 0;
}

/*
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// 初期値定義
    int n, m, tmp;
    cin >> n >> m;
	int** A = new int*[n];

	// 処理定義
	for(int i=0 ; i<n; i++){
		A[i] = new int[m];
	}
	int b[m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> tmp;
			A[i][j] = tmp;
		}
	}

	for(int i = 0; i < m; i++){
		cin >> tmp;
		b[i] = tmp;
	}

	long long int sum;
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < m; j++){
			sum += A[i][j] * b[j];
		}

		// 出力定義
		cout << sum << endl;
	}

    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
  int n,m;
  int i,j,k;
  int mat[100][100]={{}};
  int ve[100]={};
  cin >> n >> m;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin >> mat[i][j];
    }
  }
  for(j=0;j<m;j++) cin >> ve[j];
  for(i=0;i<n;i++){
    int x=0;
    for(j=0;j<m;j++) x+=mat[i][j]*ve[j];
    cout << x << endl;		       
  }
  
  return 0;
}
*/

/*
#include <stdio.h>

using namespace std;

int main(){
	int n,m,tmp;
	scanf("%d %d",&n,&m);
	int** A = new int*[n];
	for(int i = 0; i < n; i++) A[i] = new int[m];
	int b[m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&tmp);
			A[i][j] = tmp;
		}
	}
	for(int i = 0; i < m; i++){
		scanf("%d",&tmp);
		b[i] = tmp;
	}
	long long int sum;
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < m; j++){
			sum += A[i][j] * b[j];
		}
		printf("%lld\n",sum);
	}

	for(int i = 0; i < n; i++){
		delete[] A[i];
	}
	delete A;
}
*/