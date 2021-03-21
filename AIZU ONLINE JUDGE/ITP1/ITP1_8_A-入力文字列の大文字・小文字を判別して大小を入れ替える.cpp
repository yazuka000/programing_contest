/* sample input
fAIR, LATER, OCCASIONALLY CLOUDY.
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
	string str;
	getline(cin, str);

    // 処理定義
	for(int i=0; i<str.size(); i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}else if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
	}

	// 出力定義
	cout << str << endl;
	return 0;
}

/*
#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    char ch;

    // 処理定義
	while((ch = getchar()) != EOF){
		if(islower(ch)){
			ch = toupper(ch);
		}else if(isupper(ch)){
			ch = tolower(ch);
		}
		// 出力定義
		cout << ch;
	}
    return 0;
}
*/


/*
#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  getline(cin,str);
  int i;
  for(i=0;i<str.size();i++){
    if(str[i]>='a'&&str[i]<='z') str[i]+='A'-'a';
    else if(str[i]>='A'&&str[i]<='Z') str[i]+='a'-'A';
  }
    cout << str << endl;
  return 0;
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