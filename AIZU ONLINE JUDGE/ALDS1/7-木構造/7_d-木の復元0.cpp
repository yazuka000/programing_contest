/* sample input
5
1 2 3 4 5
3 2 4 1 5

4
1 2 3 4
1 2 3 4

*/

/* 実装方針

*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, pos;
vector<int> pre, in, post;

void rec(int l, int r){
    if(l >= r) return;

    int root = pre[pos++];
    int m = distance(in.begin(), find(in.begin(), in.end(), root));

    rec(l, m);
    rec(m + 1, r);

    post.push_back(root);
}

void solve(){
    pos = 0;
    rec(0, pre.size());

    for(int i=0; i<n; i++){
        if(i) cout << " ";
        cout << post[i];
    }
    cout << endl;
}

int main(){
    int k;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> k;
        pre.push_back(k);
    }

    for(int i=0; i<n; i++){
        cin >> k;
        in.push_back(k);
    }

    solve();

}

/* 参考回答

*/