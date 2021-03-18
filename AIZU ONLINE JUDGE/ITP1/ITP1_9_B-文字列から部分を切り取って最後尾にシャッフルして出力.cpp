/* sample input
aabc
3
1
2
1
vwxyz
2
3
4
-
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
	string str;
	int m, b;
	cin >> str;

    // 処理定義
	while(str!="-"){
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> b;
			str=str.substr(b,str.size()-b)+str.substr(0,b);
		}
		// 出力定義
		cout << str << endl;

		cin >> str;
	}
    return 0;
}

/*
#include <stdio.h>

using namespace std;

int main(){
	char str[20001];
	int m,tmp,length;
	while(true){
		scanf("%s",str);
		if(str[0] == '-') break;
		length = 0;
		for(int k = 0; str[k] != '\0';k++) length++;
		scanf("%d",&m);
		int index = 0;
		for(int i = 0; i < m; i++){
			scanf("%d",&tmp);
			for(int j = 0; j < tmp; j++){
				str[index+length] = str[index];
				index++;
			}
		}
		for(int p = 0; p < length; p++){
			printf("%c",str[index+p]);
		}
		printf("\n");
	}
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin >> str;
	int i;
	int m,b;
	while(str!="-"){
		cin >> m;
		for(i=0;i<m;i++){
			cin >> b;
			str=str.substr(b,str.size()-b)+str.substr(0,b);
		}
		cout << str << endl;
		cin >> str;
	}

}
*/