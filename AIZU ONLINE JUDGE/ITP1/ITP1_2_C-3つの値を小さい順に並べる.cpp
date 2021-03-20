// sample input: 8 1 3

#include <bits/stdc++.h> 
using namespace std;

int main(){
    // 初期値定義
    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }

    // 処理定義
    for(int i=2; i>0; i--){
        for(int j=0; j<3; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // 出力定義
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}

/* 参考回答

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int array[3];
	for(int i = 0; i < 3; i++) scanf("%d",&array[i]);
	for(int i = 2; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(array[j] > array[j+1])swap(array[j],array[j+1]);
		}
	}
	printf("%d %d %d\n",array[0],array[1],array[2]);
}
*/