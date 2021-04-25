/* sample input
1
koko 23 04/10 tokyo

3
mako 13 08/08 nara
taisei 16 12/04 nagano
megumi 14 11/02 saitama
*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct student{
    string name;
    int old;
    string birth;
    string state;
};

int main(){
    int N,K;
    cin >> N;
    vector<int> old(N);
    student roster[N];

    for(int i=0; i<N; i++){
        cin >> roster[i].name >> roster[i].old >> roster[i].birth >> roster[i].state;
        old[i]=roster[i].old;
    }

    sort(old.begin(), old.end());

    rep(i, N){
        rep(j, N){
            if(old[i]==roster[j].old){
                cout << roster[j].name << " " << roster[j].old << " " << roster[j].birth << " " << roster[j].state << endl;
            }
        }
    }
}

/* 参考回答
#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    int old;
    string birth;
    string state;
};

int main(){
    int N,K;
    cin >> N;
    student roster[N];
    for(int i=0;i<N;i++){
        cin >> roster[i].name >> roster[i].old >> roster[i].birth >> roster[i].state;
    }

    for(int i=0;i<N;i++){
        for(int j=N-1;i<j;j--){
            if(roster[j].old < roster[j-1].old){
                student swap = roster[j];
                roster[j] = roster[j-1];
                roster[j-1] = swap;
            }
        }
    }

    for(int i=0;i<N;i++){
        cout << roster[i].name << " " << roster[i].old << " " << roster[i].birth << " " << roster[i].state << endl;
    }
}
*/