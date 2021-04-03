/* sample input

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    int a, b;
    cin >> a >> b;

    // 処理定義

    // 出力定義
    

    return 0;
}



/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char direct[4] = {'N','E','S','W'};
int dcount = 0,sx,sy,H,W;

void move(char D, char M){
    int LR = 1,add = 1;

    if(M == 'S'){
        if(D == 'N'){
        sy--;
        }else if(D == 'S'){
        sy++;
        }else if(D == 'E'){
        sx++;
        }else{
        sx--;
        }
    }else{
        if(M == 'L'){
            LR = -1;
            add = 3;
        }

        if(D == 'N'){
            sx += LR;
        }else if(D == 'S'){
            sx -= LR;
        }else if(D == 'E'){
            sy += LR;
        }else{
            sy -= LR;
        }
        dcount += add;
    }
}

int main(){
    int N,mcount = 0;
    cin >> H >> W >> sy >> sx >> N;

    vector<string> mp(H);
    vector<pair<int,char> > td(N);

    for (int i = 0; i < H; i++){
        cin >> mp[i];
    }

    mp[sy][sx] = '*';

    for (int i = 0; i < N; i++){
        cin >> td[i].first >> td[i].second;
    }

    for (int i = 0; i < 100; i++){
        if(i == td[mcount].first){
            move(direct[dcount%4],td[mcount].second);
            mcount++;
        }else{
            move(direct[dcount%4],'S');
        }

        if(0 <= sx && sx < W && 0 <= sy && sy < H && mp[sy][sx] != '#' && mp[sy][sx] != '*'){
            mp[sy][sx] = '*';
        }else{
            break;
        }
    }

    for (int i = 0; i < H; i++){
        cout << mp[i] << endl;
    }
}
*/