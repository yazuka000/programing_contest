/* sample input
This is a pen.
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
	string str;
	int ab[26]={};

while(getline(cin,str)){
    for(int i=0;i<str.size();i++){
    if(str[i]>='a' && str[i]<='z') ab[str[i]-'a']++;
    else if(str[i]>='A'&&str[i]<='Z') ab[str[i]-'A']++;
    }

	}
	for(int i=0; i<26; i++){
		cout << (char)('a'+i) << " : " << ab[i] << endl;
	}

return 0;
}

/*
#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
	int countTable[256] = {0};
	char ch;

    // 処理定義
	while((ch = getchar()) != EOF){
				countTable[ch]++;
	}

    // 出力定義
    for(int i = 97; i <=122;i++){
		printf("%c : %d\n",i,countTable[i]+countTable[i-32]);
	}
	
    return 0;
}
*/


// printf("%c : %d\n",i,countTable[i]+countTable[i-32]);
/*
#include <stdio.h>

int main(){
	int countTable[256] = {0};
	char ch;

	while((ch = getchar()) != EOF){
				countTable[ch]++;
	}
	for(int i = 97; i <=122;i++)printf("%c : %d\n",i,countTable[i]+countTable[i-32]);
}
*/

/*

#include <bits/stdc++.h> 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int ab[26]={};

while(getline(cin,str)){
    for(int i=0;i<str.size();i++){
    if(str[i]>='a'&&str[i]<='z') ab[str[i]-'a']++;
    else if(str[i]>='A'&&str[i]<='Z') ab[str[i]-'A']++;
    }

	}
	for(i=0;i<26;i++){
		cout << (char)('a'+i) << " : " << ab[i] << endl;
	}

return 0;
}
*/