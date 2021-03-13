/* sample input
5 14 80
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int x, y, z, num;
    cin >> x >> y >> z;
    for (; x<= y; x++) {
        if (z % x == 0) num++;
	}
    cout << num << endl;
    return 0;
}
