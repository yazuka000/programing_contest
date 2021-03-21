/* sample input
123
55
1000
0
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
	string str;
	cin >> str;

	// 処理定義
	while(str[0] != '0'){
		int sum = 0;
		for(int i=0; i<str.size(); i++){
			sum+=str[i]-'0';
		}
		// 出力定義
		cout << sum << endl;
		cin >> str;
	}
	
	return 0;
}


/*
#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  cin >> str;
  while(str[0]!='0'){
    int i,o=0;
    for(i=0;i<str.size();i++){
      o+=str[i]-'0';
    }
    cout << o << endl;
    cin >> str;
  }
  return 0;
}
*/

/*
#include <stdio.h>

int main(){
	int sum = 0;
	char ch;

	while(true)
	{
		while((ch = getchar()) != '\n'){
			sum += ch - '0';
		}
		if(sum == 0)
			break;
		else{
			printf("%d\n",sum);
			sum = 0;
		}
	}
}
*/