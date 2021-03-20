#include <bits/stdc++.h> 
using namespace std;

void outPut(int Array[],char mark){
	for(int i = 1; i <= 13; i++){
		if(Array[i] == 0) {
            cout << mark << " " << i << endl;
        }
    }
}

int main() {
    int count, num;
    char mark;

    int S[14], H[14], C[14], D[14];
	for(int i = 0; i < 14; i++) S[i] = H[i] = C[i] = D[i] = 0;

	cin >> count;
    
    while(count--){
        cin >> mark >> num;

        switch(mark){
        case 'S':
            S[num] = 1;
            break;
        case 'H':
            H[num] = 1;
            break;
        case 'C':
            C[num] = 1;
            break;
        case 'D':
            D[num] = 1;
            break;
        }
    }

	outPut(S,'S');
	outPut(H,'H');
	outPut(C,'C');
	outPut(D,'D');
    
    return 0;
}

/* sample input
47
S 10
S 11
S 12
S 13
H 1
H 2
S 6
S 7
S 8
S 9
H 6
H 8
H 9
H 10
H 11
H 4
H 5
S 2
S 3
S 4
S 5
H 12
H 13
C 1
C 2
D 1
D 2
D 3
D 4
D 5
D 6
D 7
C 3
C 4
C 5
C 6
C 7
C 8
C 9
C 10
C 11
C 13
D 9
D 10
D 11
D 12
D 13
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n;
	int i;
	int card[4][13]={{}};
	cin >> n;
	char a;
	int b;
	for(i=0;i<n;i++) {
    cin >> a >> b;
    switch(a){
    case 'S':
		card[0][b-1]=1;
		break;
    case 'H':
		card[1][b-1]=1;
		break;
    case 'C':
		card[2][b-1]=1;
		break;
    case 'D':
		card[3][b-1]=1;
		break;
    }
	}
	for(i=0;i<52;i++) {
    switch(i/13){
    case 0:
		if(card[0][i%13]==0) cout << "S " << i+1 << endl;
		break;
    case 1:
		if(card[1][i%13]==0) cout << "H " << i%13+1 << endl;
		break;
    case 2:
		if(card[2][i%13]==0) cout << "C " << i%13+1 << endl;
		break;
    case 3:
		if(card[3][i%13]==0) cout << "D " << i%13+1 << endl;
		break;
    }
}

return 0;
}
*/

/*　参考回答
#include <stdio.h>

using namespace std;

void outPut(int Array[],char mark){
	for(int i = 1; i <= 13; i++){
		if(Array[i] == 0) printf("%c %d\n",mark,i);
	}
}

int main(){
	char mark[2];
	int n,S[14],H[14],C[14],D[14],tmp;
	for(int i = 0; i < 14; i++) S[i] = H[i] = C[i] = D[i] = 0;
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%s %d",mark,&tmp);
		switch(mark[0]){
		case 'S':
			S[tmp] = 1;
			break;
		case 'H':
			H[tmp] = 1;
			break;
		case 'C':
			C[tmp] = 1;
			break;
		case 'D':
			D[tmp] = 1;
			break;
		}
	}
	outPut(S,'S');
	outPut(H,'H');
	outPut(C,'C');
	outPut(D,'D');
}
*/