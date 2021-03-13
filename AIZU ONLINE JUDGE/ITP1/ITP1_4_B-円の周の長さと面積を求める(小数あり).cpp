#include <bits/stdc++.h> 
using namespace std;

int main(){
    double r, men, syu;
    cin >> r;

    // M_PIで、円周率を呼び出せる
    syu = (double)r * 2 * M_PI;
    men = (double)pow(r, 2) * M_PI;

    cout << fixed << setprecision(6) << men << " " << syu << endl;
	return 0;
}