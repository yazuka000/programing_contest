/* sample input
84939825309432908832902189.9092309409809091329
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
	char x[203];
	scanf("%s", x);
	char *dot_pos = strchr(x, '.');
	if (dot_pos) *dot_pos = '\0';
	puts(x);
	return 0;
}

