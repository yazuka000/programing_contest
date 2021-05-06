/* sample input
2 2
*.
.*

1 4
***.

9 20
.....***....***.....
....*...*..*...*....
...*.....**.....*...
...*.....*......*...
....*.....*....*....
.....**..*...**.....
.......*..*.*.......
........**.*........
.........**.........


*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll; 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    int h, w;
    cin >> h >> w;
    vector<string> bd(h*2);

    // 入力
    for(int i=0; i<h*2; i+=2){
        cin >> bd[i];
        bd[i+1]=bd[i];

        cout << bd[i] << endl;
        cout << bd[i+1] << endl;
    }

}

/* 参考回答

*/