#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;


void view(vector< vector<int> > arr,int h,int w){
  for(int i_1 = h-1;i_1>-1;i_1--){
    for(int i_2 = 0;i_2<w;i_2++){
      //cout << arr[i_2][i_1];
      if(arr[i_2][i_1] == 1){
        cout << "#";
      }else{
        cout << ".";
      }
    }
    cout << "\n";
  }
  cout << "\n";
}

int main(void){
  int h,w,n;
  cin >> h >> w >> n;
  vector< vector<int> > arr;
	arr.resize(w);		// ()内の数字が要素数になる
	for( int i=0; i<w; i++ ){
		arr[i].resize(h);
	}
  //ここまで初期化
  
  int h_,w_,x_;
  cin >> h_ >> w_ >> x_;
  for(int i_1 = 0;i_1<h_;i_1++){
    for(int i_2 = x_;i_2<w_+x_;i_2++){
      arr[i_2][i_1] = 1;
    }
  }
  //一個目の入力処理
//view(arr,h,w);
//ここまで合ってる

  int flag;//詰めるかのフラグ
  int flag2;
  for(int i = 0;i<n-1;i++){
    cin >> h_ >> w_ >> x_;
    //cout << h_<<w_<<x_<<"\n";
    //view(arr,h,w);
    int i_;
    for(i_ = h-1;i_>-1;i_--){//高さi_につめるか？
    flag = 0;
    flag2 = 0;
      for(int aaa = x_;aaa<w_+x_;aaa++){
        flag += arr[aaa][i_];
        flag2 += arr[aaa][i_-1];
      }
      if(flag == 0&&flag2!=0){
      for(int a1=i_;a1<h_+i_;a1++){
            for(int a2 = x_;a2<w_+x_;a2++){
            arr[a2][a1] = 1;
          }
        }
        
        break;
      }
    }
  }

view(arr,h,w);
  //cout << a-b;
  return 0;
}