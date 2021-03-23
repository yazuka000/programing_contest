/* sample input
computer
Nurtures computer scientists and highly skilled computer engineers
who will create and exploit knowledge for the new era
Provides an outstanding Computer environment
END_OF_TEXT
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	// 初期値定義
	string w;
	string t;

	// 処理定義
	cin >> w;
	int i;
	for(i=0;i<w.size();i++) {
		if('A'<=w[i] && w[i]<='Z'){
			// 'a'-'A'をすれば、大文字を小文字に変換する
			w[i]+='a'-'A';
		} 
	}

	int o=0;
	while(true){
		cin >> t;
		if(t == "END_OF_TEXT") break;
		for(i=0; i<t.size(); i++) {
			if('A'<=t[i] && t[i]<='Z'){
				t[i]+='a'-'A';
			}
		}
		if(w==t) o++;
	}

	// 出力定義
	cout << o << endl;

	return 0;
}

/*
#include <bits/stdc++.h> 
using namespace std;

    // 処理関数定義
int stricmp(char* ch1,char* ch2){
	int ch1_length = 0,ch2_length = 0,div;
	for(int i = 0; ch1[i] != '\0';i++) ch1_length++;
	for(int i = 0; ch2[i] != '\0';i++) ch2_length++;
	if(ch1_length != ch2_length) return -1;
	for(int i = 0; ch1[i] != '\0';i++){
		div = ch1[i] -ch2[i];
		if(div != 0 && div != 32 && div != -32){
			return -1;
		}
	}
	return 0;
}

	
int main(){
	// 初期値・入力定義
	char W[11],T[1001];
	int count = 0;
	scanf("%s",W);

	// 処理定義
	while(true){
		scanf("%s",T);
		if(strcmp("END_OF_TEXT",T) == 0) break;
		if(stricmp(T, W) == 0) count++;
	}

	// 出力定義
	printf("%d\n",count);

    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>

int stricmp(char* ch1,char* ch2){
	int ch1_length = 0,ch2_length = 0,div;
	for(int i = 0; ch1[i] != '\0';i++) ch1_length++;
	for(int i = 0; ch2[i] != '\0';i++) ch2_length++;
	if(ch1_length != ch2_length) return -1;
	for(int i = 0; ch1[i] != '\0';i++)
	{
		div = ch1[i] -ch2[i];
		if(div != 0 && div != 32 && div != -32)
			return -1;
	}
	return 0;
}

int main(){
	char W[11],T[1001];
	int count = 0;
	scanf("%s",W);
	while(true){
		scanf("%s",T);
		if(strcmp("END_OF_TEXT",T) == 0) break;
		if(stricmp(T, W) == 0) count++;
	}
	printf("%d\n",count);
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main(){
	string w;
	string t;
	cin >> w;
	int i;
	for(i=0;i<w.size();i++) {
		if('A'<=w[i]&&w[i]<='Z'){
			w[i]+='a'-'A';
		} 
	}

	int o=0;
	cin >> t;
	while(t!="END_OF_TEXT"){
		for(i=0;i<t.size();i++) {
			if('A'<=t[i]&&t[i]<='Z'){
				t[i]+='a'-'A';
			}
		}
    if(w==t) o++;
    cin >> t;
	}
	cout << o << endl;

	return 0;
}
*/