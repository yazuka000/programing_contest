#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
  int M,N,K;
  cin >> M >> N >> K;
  vector<int> shiji(M+1,0); //支持の箱を立候補者＋１で確保　＋１は無支持者。０で初期化

  shiji.pop_back();
  shiji.push_back(N);//最後のデータ、つまり無支持者の数を設定


  int e2;//enze2の略
  for(int i = 0;i<K;i++){
    cin >> e2;//誰が演説するのか
    /*
      if(shiji[M]>0){//無支持者がまだいた場合
      shiji[M]--;
      shiji[e2-1]++;
    }
    */
    for(int x = 0;x<=M;x++){//立候補者xさんの支持者がいるか確認し、いたら減らして増やす！
      if(shiji[x]>0){//支持者がまだいた場合
      shiji[x]--;
      shiji[e2-1]++;
      }
    }
    //cout<<shiji[0]<<shiji[1]<<"\n";
  }
  
  int max = *std::max_element(shiji.begin(), shiji.end()-1);
  //cout << max;
  for(int i = 0;i<M;i++){
    if(shiji[i] == max){
      cout << i+1 << "\n";
    }
  }

 
  return 0;
}