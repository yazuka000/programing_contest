

/* sample input
5 5 4 2
.#..#
#.###
##...
#..#.
#.###
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int h, w, x, y, count=-3;
    cin >> h >> w >> x >> y;
    char s[h][w];

    // 処理定義
    rep(i, h){
        rep(j, w){
            cin >> s[i][j];
        }
    }

    for(int i=x-1; i<h; i++){
        if(s[i][y-1] == '.'){
            count++;
        }else if(s[i][y-1] == '#'){
            break;
        }
    }

    for(int i=y-1; i<w; i++){
        if(s[x-1][i] == '.'){
            count++;
        }else if(s[x-1][i] == '#'){
            break;
        }
    }

    for(int i=x-1; i>=0; i--){
        if(s[i][y-1] == '.'){
            count++;
        }else if(s[i][y-1] == '#'){
            break;
        }
    }

    for(int i=y-1; i>=0; i--){
        if(s[x-1][i] == '.'){
            count++;
        }else if(s[x-1][i] == '#'){
            break;
        }
    }


    // 出力定義

    cout << count << endl;
    

    return 0;
}

/*
#include <bits/stdc++.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int h = ri();
	int w = ri();
	int x = ri() - 1;
	int y = ri() - 1;
	std::string s[h];
	for (auto &i : s) std::cin >> i;
	
	int cnt = -3;
	for (int i = x; i < h && s[i][y] != '#'; i++) cnt++;
	for (int i = x; i >= 0 && s[i][y] != '#'; i--) cnt++;
	for (int j = y; j < w && s[x][j] != '#'; j++) cnt++;
	for (int j = y; j >= 0 && s[x][j] != '#'; j--) cnt++;
	printf("%d\n", cnt);
	return 0;
}



*/