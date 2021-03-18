/* sample input
3
cat dog
fish fish
lion tiger
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int n, t=0, h=0;
	string s1, s2;
	cin >> n;

    // 処理定義
	for(int i=0; i<n; i++){
		cin >> s1 >> s2;
		if(s1.compare(s2) == 0){
			t++;
			h++;
		}else if(s1.compare(s2) > 0){
			t+=3;
		}else{
			h+=3;
		}
	}

    // 出力定義
    cout << t << " " << h << endl;

    return 0;
}

/*
#include <stdio.h>

using namespace std;

int main(){
	int n,taro_point = 0,hanako_point = 0,j;
	char taro_card[101],hanako_card[101];
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s %s",taro_card,hanako_card);
		for(j = 0; taro_card[j] != '\0' && hanako_card[j] != '\0' && taro_card[j] == hanako_card[j];j++);
		if(taro_card[j] == '\0'){
			if(hanako_card[j] == '\0'){
				taro_point += 1;
				hanako_point += 1;
			}else{
				hanako_point += 3;
			}
		}else if(hanako_card[j] == '\0'){
			taro_point += 3;
		}else if(hanako_card[j] > taro_card[j]){
			hanako_point += 3;
		}else{
			taro_point += 3;
		}
	}
	printf("%d %d\n",taro_point,hanako_point);
}
*/

/*
#include<iostream>
#include<string>

using namespace std;
int main(){
	int n,i;
	cin >> n;
	string s1,s2;
	int t=0,h=0;

	for(i=0;i<n;i++){
		cin >> s1 >> s2;
		if(s1.compare(s2)==0) {
			t++;h++;
		}else if(s1.compare(s2)>0) t+=3;
		else h+=3;
	}
	cout << t << " " << h << endl;
}
*/