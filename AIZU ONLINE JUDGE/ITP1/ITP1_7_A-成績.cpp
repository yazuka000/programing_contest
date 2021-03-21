/* sample
40 42 -1
20 30 -1
0 2 -1
-1 -1 -1
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
	// 初期値定義
    int m, f, r;

	// 処理・出力定義
	while(true){
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;
		if(m == -1 || f == -1){
			cout << "F" << endl;
		}else if(m + f >= 80){
			cout << "A" << endl;
		}else if(m + f >= 65 && m + f < 80){
			cout << "B" << endl;
		}else if(m + f >= 50 && m + f < 65){
			cout << "C" << endl;
		}else if(m + f >= 30 && m + f < 50){
			if(r >= 50){
				cout << "C" << endl;
			}else{
				cout << "D" << endl;
			}
		}else if(m + f < 30){
			cout << "F" << endl;
		}
	}
    return 0;
}


/*
#include<iostream>
using namespace std;
int main(){
  int m,f,r;
  cin >> m >> f >> r;
  while(m!=-1||f!=-1||r!=-1){
    if(m==-1||f==-1) cout << "F" << endl;
    else if(m+f>=80) cout << "A" << endl;
    else if(m+f>=65) cout << "B" << endl;
    else if(m+f>=50) cout << "C" << endl;
    else if(m+f>=30)
      if(r>=50) cout << "C" << endl;
      else cout << "D" << endl;
    else cout << "F" << endl;

    cin >> m >> f >> r;
  }
  return 0;
}
*/



/*
#include <stdio.h>

using namespace std;

int main(){
	int m,f,r;
	char grade;
	while(true){
		scanf("%d %d %d",&m,&f,&r);
		if(m == -1 && f == -1 && r == -1) break;
		if(m == -1 || f == -1){
			grade = 'F';
		}else if(m+f >= 80){
			grade = 'A';
		}else if(m+f >= 65){
			grade = 'B';
		}else if(m+f >= 50){
			grade = 'C';
		}else if(m+f >= 30){
			grade = (r >= 50)? 'C':'D';
		}else{
			grade = 'F';
		}
		printf("%c\n",grade);
	}
}
*/