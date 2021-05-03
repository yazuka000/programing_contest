/* sample input
aca
accc
ca

abcb
aacb
bccc
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    string s[3];

    // 入力
    cin >> s[0] >> s[1] >> s[2];

	int pos = 0; 
	
	while(true){
        // s[pos]の文字列が0文字になった場合、A、B、Cを出力
        // 小文字であるposに+'A'することで、posの小文字を大文字に変換できる
		if (s[pos].size() == 0) {
			cout << char(pos + 'A');
			break;  
		}
		
        // nextに、s[pos][0]の文字を代入
		char next = s[pos][0];
		
        // s[pos]をerase関数で、先頭の文字を指定して消している
		s[pos].erase(s[pos].begin()); 
		
        // posに、nextの文字から-'a'することで、0、1、2のいずれかを算出する
        // char型には数値が振られているため、そこからスペルを引くことで数値的な引き算が起こり、数を算出できる
		pos = next - 'a';
	}	
}

/* 参考回答
#include <bits/stdc++.h>
using namespace std;

string s[3]; 

int main() {
	cin >> s[0] >> s[1] >> s[2]; 
	
	int pos = 0; 
	
	while (true) {
		if (s[pos].size() == 0) {
			cout << char(pos + 'A');
			break;  
		}
		
		char next = s[pos][0];
		
		s[pos].erase(s[pos].begin()); 
		
		pos = next - 'a';
	}	
}


#include<iostream>
using namespace std;

int main(){
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    int n=0;

    while(true){
        if(s[n].length()==0) break;
        int next = (int)(s[n][0]-'a');
        s[n] = s[n].substr(1);
        n = next;
    }

    cout << (char)('A'+n) << endl;
}
*/