#include <bits/stdc++.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int n = ri();
	std::vector<int> a(n);
	std::vector<int> b(n);
	for (int i = 0; i < n; i++) a[i] = ri(), b[i] = ri();
	
	int res = 1000000000;
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
		res = std::min(res, i == j ? a[i] + b[j] : std::max(a[i], b[j]));
	printf("%d\n", res);
	
	return 0;
}


