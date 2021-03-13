/*

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N << endl;
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i { 0 }; i < N; ++i){
        cin >> arr[i];
    }
}

int main(){
    int l, i=0, a[10];
    while(cin>>l){
        a[i] = l;
        cout << a[i];
        i++;
    }
}

int main() {
    string s;
    getline(cin,s);
    cout << s << "\n";
    cout << s[0];
}

int main(){
    cout << "Hello World" << endl;
    return 0;
}

if (条件){
　　処理
} else if (条件) {
　　処理
} else {
　　処理
}

#include <bits/stdc++.h> 
using namespace std;

int main() {

    cin >> a ;

    cout <<  << endl;

    return 0;
}
*/

/*　問題内容
長方形の中に円が含まれるかを判定するプログラムを作成してください。次のように、長方形は左下の頂
点を原点とし、右上の頂点の座標 (W,H)(W,H) が与えられます。また、円はその中心の座標 (x,y)(x,y) と半径 r で 与えられます。
*/

/* 制約・条件
−100≤　x,y　≤100
0<　W,H,r　≤100
*/

// sample input: 5 4 2 2 1



#include <bits/stdc++.h> 
using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if (x - r < 0 || y - r < 0) {
        cout << "No" << endl;
    } else if (x + r > W || y + r > H) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}