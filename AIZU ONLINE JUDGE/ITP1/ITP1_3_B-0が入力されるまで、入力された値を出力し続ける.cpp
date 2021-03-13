/* sample input
3
5
11
7
8
19
0
*/

/* 制約・条件

*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int i = 1;
    int num;
    while (true) {
    cin >> num;
    if (num == 0) break;
    cout << "Case " << i << ":" << " " << num << endl;
    i++;
    }
}
