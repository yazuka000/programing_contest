


/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cin >> str;
	int q,i;
	cin >> q;
	string s1,s2;
	int a,b;
	for(i=0;i<q;i++){
    //cout << str << endl;
    cin >> s1 >> a >> b;
    if(s1=="print"){
		cout << str.substr(a,b-a+1) << endl;
    }else if(s1=="reverse"){
		string s3=str.substr(a,b-a+1);
		reverse(s3.begin(),s3.end());
		str=str.substr(0,a)+s3+str.substr(b+1,str.size()-a-1);
    }else{
		cin >> s2;
		str=str.substr(0,a)+s2+str.substr(b+1,str.size()-a-1);
    }
	}
}
*/

/*
#include <stdio.h>
#include <algorithm>

using namespace std;

void print(char str[],int a,int b){
	for(int i = a; i <= b; i++)	printf("%c",str[i]);
	printf("\n");
}

void replace(char str[],char p[],int a,int b){
	int p_length = b-a+1;
	for(int i = 0; i < p_length;i++) str[a+i] = p[i];
}

void reverse(char str[],int a,int b){
	int left = a,right = b;
	while(left < right){
		swap(str[left++],str[right--]);
	}
}

int main(){
	char str[1001],p[1001],order[8];
	int q,a,b;
	scanf("%s",str);
	scanf("%d",&q);
	for(int i = 0; i < q; i++){
		scanf("%s %d %d",order,&a,&b);
		switch(order[2]){
		case 'i':
			print(str,a,b);
			break;
		case 'v':
			reverse(str,a,b);
			break;
		case 'p':
			scanf("%s",p);
			replace(str,p,a,b);
			break;
		}
	}
}
*/