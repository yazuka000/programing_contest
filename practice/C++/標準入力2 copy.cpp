/*

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N << endl;
}


int main() {
    string s;
    getline(cin,s);
    cout << s << "\n";
    cout << s[0];
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i { 0 }; i < N; ++i){
        cin >> arr[i];
    }
}

if (条件){
　　処理
} else if (条件) {
　　処理
} else {
　　処理
}

for (int i = 0; i < 3; i++) {
	cout <<  i << "\n";
	}
return 0;
}

while True:
if (num == 0) break;

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    // 0 ~ 9までの最大値を出力 9が出力
    cout << *max_element(a,a + 10);
    // 2 ~ 10までの最小値を出力 2が出力
    cout << *min_element(a + 2,a + 10);
}

・円周率の使い方
#include <bits/stdc++.h>
M_PI

f = (double)a / b;
cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;

#include <bits/stdc++.h> 
using namespace std;

int main() {

    cin >> a >> b;
    cout <<  << endl;
    return 0;
}

int main(){
	int a,b;
	scanf("%d%d%d",&a,&b);

    printf("%d\n",&a);
	return 0;
}

*/

/* sample input
5
10 1 5 4 17
*/

/* 制約・条件
0<n≤10000
−1000000≤ai≤1000000

乳固形分が 
15パーセント以上、乳脂肪分が 
8 パーセント以上含まれるものを「アイスクリーム」とする。
上に当てはまらず、乳固形分が 
10 パーセント以上、乳脂肪分が 
3 パーセント以上含まれるものを「アイスミルク」とする。
上のいずれにも当てはまらず、乳固形分が 
3パーセント以上含まれるものを「ラクトアイス」とする。
上のいずれにも当てはまらないものを「氷菓」とする。
*/

// 無脂乳固形分 a
// 乳脂肪分 b
// 乳固形分は無脂乳固形分と乳脂肪分の2つから成ります。

#include <bits/stdc++.h> 
using namespace std;


int main() {
    int a, b, nyuko;
    cin >> a >> b;

    nyuko = a + b;
if(nyuko >= 15 && b >= 8){
    cout << 1 << endl;
} else if(nyuko >= 10 && b >= 3){
    cout << 2 << endl;
} else if(nyuko >= 3){
    cout << 3 << endl;
} else {
    cout << 4 << endl;
}
    return 0;
}


