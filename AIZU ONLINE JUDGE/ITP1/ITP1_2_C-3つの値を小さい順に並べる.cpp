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

    cin >> a >> b;

    cout <<  << endl;

    return 0;
}
*/

// sample input: 8 1 3

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a, b, c, x, y, z, m;
    cin >> a >> b >> c;
    if (a < b && a < c) {
        x = a;
        y = b;
        z = c;
    } else if (b < a && b <c) {
        x = b;
        y = a;
        z = c;
    } else {
        x = c;
        y = a;
        y = a;
        z = b;
    }

    if (y > z) {
        m = z;
        z = y;
        y = m;
    } 

    cout << x << " " << y << " " << z << endl;

    return 0;
}