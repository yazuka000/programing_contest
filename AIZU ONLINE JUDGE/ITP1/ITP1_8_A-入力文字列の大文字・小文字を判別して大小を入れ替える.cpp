/* sample input
fAIR, LATER, OCCASIONALLY CLOUDY.
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    char ch;

    // 処理・出力定義
	while((ch = getchar()) != EOF){
		if(islower(ch)){
			ch = toupper(ch);
			cout << ch;
		}else if(isupper(ch)){
			ch = tolower(ch);
			cout << ch;
		}else{
			cout << ch;
		}
	}

    return 0;
}


/*
	while((ch = getchar()) != EOF){
		if(ch >= 97 && ch <= 122){
			cout << ch-32;
		}else if(ch <= 90 && ch >= 65){
			cout << ch+32;
		}else{
			cout << ch;
		}
	}
*/


/*
#include <stdio.h>

int main(){
	char ch;
	while((ch = getchar()) != EOF){
			if(ch >= 97 && ch <= 122)
				printf("%c",ch-32);
			else if(ch >= 65 && ch <= 90)
				printf("%c",ch+32);
			else
				printf("%c",ch);
	}
}
*/