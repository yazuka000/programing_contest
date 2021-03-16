/* sample input
3 2 3
1 2
0 3
4 5
1 2 1
0 3 2
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, m, l;
    cin >> n >> m >> l;
	int A[n][m], B[m][l];
	long long int C[n][l];
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			C[i][j] = 0;
		}
	}

    // 処理定義
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<l; j++){
			cin >> B[i][j];
		}
	}

	for(int i = 0; i<n; i++){
		for(int k=0; k<l; k++){
			for(int j=0; j<m; j++){
				C[i][k] += A[i][j]*B[j][k];
			}
		}
	}

    // 出力定義
    for(int i = 0; i<n; i++){
		for(int j=0; j<l-1; j++){
			cout << C[i][j] << " ";
		}
		cout << C[i][l-1] << endl;
	}
    
    return 0;
}






/*
#include <stdio.h>

using namespace std;

int main(){
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);
	int A[n][m],B[m][l];
	long long int C[n][l];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			C[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < l; j++){
			scanf("%d",&B[i][j]);
		}
	}

	for(int i = 0; i < n; i++){
		for(int k = 0; k < l; k++){
			for(int j = 0; j < m; j++){
				C[i][k] += A[i][j]*B[j][k];
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < l-1; j++){
			printf("%lld ",C[i][j]);
		}
		printf("%lld\n",C[i][l-1]);
	}
}
*/