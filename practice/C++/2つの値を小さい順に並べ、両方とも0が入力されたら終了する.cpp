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

for (int i = 0; i < 3; i++) {
	cout <<  i << "\n"; // 0 1 2が出力される
	}
return 0;
}

while True:
if (num == 0) break;

#include <bits/stdc++.h> 
using namespace std;

int main() {

    cin >> a >> b;

    cout <<  << endl;

    return 0;
}
*/

/* sample input
3 2
2 2
5 3
0 0
*/

/* 制約・条件

*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int x, y;
    while(true){
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x < y) {
            cout << x << " " << y << endl;
        } else {
            cout << y << " " << x << endl;
        }
    }
    return 0;
}
