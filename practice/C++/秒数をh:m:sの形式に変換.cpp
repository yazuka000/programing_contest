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

#include <bits/stdc++.h> 
using namespace std;

int main() {

    cin >> a >> b;

    cout <<  << endl;

    return 0;
}
*/

// sample input: 46979

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int S;
    cin >> S;
    int h, m, s;
    h = S / 3600;
    m = (S % 3600) / 60;
    s = (S % 3600) % 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}