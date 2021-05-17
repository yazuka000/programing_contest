/* sample input
1 2 +

1 2 + 3 4 - *

*/

/* 実装方針
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int top=0, Stack[1000];

void push(int x){
    // push(x)のxを、Stack[top]のtopをプラス1し、インデックスの要素にxを格納する
    Stack[++top] = x;
}

int pop(){
    // マイナスしてからStack[top+1]を返すことで、Stackの一番上の値、
    // つまり、一番最後に格納された最新の値を指定して取得する
    top--;
    return Stack[top+1];
}

int main(){
    char s[100];
    int a, b;

    while(scanf("%s", s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a + b);
        }else if(s[0] == '-'){
            a = pop();
            b = pop();
            // ここだけ、bからaの計算式になっている。これでないとエラーになる
            push(b - a);
        }else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a * b);
        }else{
            push(atoi(s));
        }
    }

    printf("%d\n", pop());
    return 0;
}


/* 参考回答
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int Stack[1000],top=0;

void push(int x){
	Stack[++top] = x;
}

int pop(){
	top--;
	return Stack[top+1];
}

int main(){
	char s[100];
	int x,y;

	while(scanf("%s", s) != EOF){
		if(s[0] == '+'){
			x = pop();
			y = pop();
			push(x + y);
		}else if(s[0] == '-'){
			x = pop();
			y = pop();
			push(y - x);
		}else if(s[0] == '*'){
			x = pop();
			y = pop();
			push(x * y);
		}else{
			push(atoi(s));
		}
	}

	printf("%d\n",pop());
	return 0;
}

int main(){
    char s[100];
    int a, b;

    while(scanf("%s", s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a + b);
        }else if(s[0] == '-'){
            a = pop();
            b = pop();
            push(a - b);
        }else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a * b);
        }else{
            push(atoi(s));
        }
    }

    printf("%d\n", pop());
    return 0;
}
*/