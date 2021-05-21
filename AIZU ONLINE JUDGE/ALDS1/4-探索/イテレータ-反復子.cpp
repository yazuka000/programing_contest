/* sample input
2 0 1 4

*/

/* 実装方針
イテレータ(反復子)とは、コンテナ構造になっているデータの要素にアクセスし、
所定の処理を反復するための概念

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void print(vector<int> v){
    // ベクタの先頭から順番にアクセス
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it;
    }

    cout << endl;
}

int main(){
    int N = 4;
    vector<int> v;

    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    print(v);

    vector<int>::iterator it = v.begin();
    *it = 3; // 先頭の要素 v[0] を3にする
    it++; // 1つ先にイテレータを進める
    (*it)++; // v[1] の要素にプラス1する

    print(v);

}

/* 参考回答

*/