/* sample input
8
3 3 4 4 5 8 7 9
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    // 初期値定義
    int num;
    cin >> num;
    int a[num];

    // 処理定義
    int i;
    for (i=0; i<num; i++){
        cin >> a[i];
    }

    // 出力定義
    for (i=num-1; i>0; i--){
        cout << a[i] << " ";
    }
    cout << a[0] << endl;
    
    return 0;
}

/*　参考回答
#include <stdio.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int A[n];

	for(int i = 0; i < n; i++) scanf("%d",&A[i]);

	for(int i = n-1; i > 0; i--) printf("%d ",A[i]);
	printf("%d\n",A[0]);
}
*/