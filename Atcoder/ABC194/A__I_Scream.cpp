#include <stdio.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int a = ri();
	int b = ri();
	int c = a + b;
	
	if (c >= 15 && b >= 8) puts("1");
	else if (c >= 10 && b >= 3) puts("2");
	else if (c >= 3) puts("3");
	else puts("4");
	
	return 0;
}


