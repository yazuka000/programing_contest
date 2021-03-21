/* sample
3
1 1 3 8
3 2 2 7
4 3 8 1
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
	// 初期値定義
	int n, b, f, r, v;
	int build[4][3][10]={{{}}};
	cin >> n;

	// 処理定義
	for(int i=0; i<n; i++){
		cin >> b >> f >> r >> v;
		build[b-1][f-1][r-1]+=v;
	}

	// 出力定義
	for(int i=0;i<4;i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<10; k++){
				cout << " ";
				cout << build[i][j][k];
			}
			cout << endl;
		}
		if(i<3)cout << "####################" << endl;
	}

	return 0;
}
/*
#include <bits/stdc++.h> 
using namespace std;

void output(int H[3][10]){
	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			cout << " " << H[i][j];
		}
		cout << endl;
	}
}

int main() {
    int n, b, f, r, v, H1[3][10], H2[3][10], H3[3][10], H4[3][10];
    cin >> n;

	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			H1[i][j] = H2[i][j] = H3[i][j] = H4[i][j] = 0;
		}
	}

	for(int x=0; x<n; x++){
		cin >> b >> f >> r >> v;
		switch(b){
			case 1:
			H1[f-1][r-1] += v;
			break;
			case 2:
			H2[f-1][r-1] += v;
			break;
			case 3:
			H3[f-1][r-1] += v;
			break;
			case 4:
			H4[f-1][r-1] += v;
			break;
		}
	}

	output(H1);
	cout << "####################" << endl;
	output(H2);
	cout << "####################" << endl;
	output(H3);
	cout << "####################" << endl;
	output(H4);

    return 0;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
	int n;
	int i,j,k;
	int build[4][3][10]={{{}}};
	cin >> n;
	int b,f,r,v;
	for(i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    build[b-1][f-1][r-1]+=v;
	}
	for(i=0;i<4;i++){
	for(j=0;j<3;j++){
	for(k=0;k<10;k++){
	cout << " ";
	cout << build[i][j][k];
    }
    cout << endl;
    }
    if(i<3)cout << "####################" << endl;
}
return 0;
}
*/


/*

#include <stdio.h>

using namespace std;

void output(int H[3][10]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 10; j++){
			printf(" %d",H[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int H1[3][10],H2[3][10],H3[3][10],H4[3][10],n,h_num,f_num,r_num,div_num;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 10; j++){
			H1[i][j] = H2[i][j] = H3[i][j] = H4[i][j] = 0;
		}
	}
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d %d %d %d",&h_num,&f_num,&r_num,&div_num);
		switch(h_num){
		case 1:
			H1[f_num-1][r_num-1] += div_num;
			break;
		case 2:
			H2[f_num-1][r_num-1] += div_num;
			break;
		case 3:
			H3[f_num-1][r_num-1] += div_num;
			break;
		case 4:
			H4[f_num-1][r_num-1] += div_num;
			break;
		}
	}

	output(H1);
	printf("####################\n");
	output(H2);
	printf("####################\n");
	output(H3);
	printf("####################\n");
	output(H4);

}
*/