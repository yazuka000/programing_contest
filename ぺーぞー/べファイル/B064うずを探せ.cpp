#include <iostream>
#include <vector>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w;
    cin >> h >> w;

    vector< vector<int> > vec (h, vector<int>(w) );
    int blist[10][10];//被り防止 
    bool blist_[10][10];//被り防止
    char aa;
    for(int i=0;i<h;i++){
        for(int l=0;l<w;l++){
            cin >> aa;
            switch (aa){
                case 'R':
                    vec[i][l] = 0;
                    break;
                case 'L':
                    vec[i][l] = 1;
                    break;
                case 'U':
                    vec[i][l] = 2;
                    break;
                case 'D':
                    vec[i][l] = 3;
                    break;
            }
        }
    }
    int now[2] = {0,0};//探査用の是表変数
    bool flag;//範囲外に出たらfalse
    bool uzu;//波になったらfalse
    int uz = 0;//渦の数
    int mae;
    int count;

    for(int i=0;i<h;i++){
        for(int l=0;l<w;l++){
            now[0] = i;
            now[1] = l;
            flag = true;
            uzu = true;
            count = 0;
            for(int q=0;q<h;q++){
                for(int p=0;p<w;p++){
                    blist_[q][p] = false;
                    blist[q][p] = false;
                }
            }
            //cout << i << l << "からスタート\n";
            if(blist[now[0]][now[1]] == true){
                flag = false;
                //cout <<"かぶり\n";
            }

            //if(flag == true) cout << now[0] << now[1] <<endl;
            while(flag && uzu){//このループでnowから始まる渦をたどる
                count++;
                if(count>100){
                    flag = false;
                }
                blist_[now[0]][now[1]] = true;
                mae = vec[now[0]][now[1]];
                if(mae+vec[now[0]][now[1]]==1){
                    flag = false;
                }
                if(mae+vec[now[0]][now[1]] == 5){
                    flag = false;
                }
                switch (vec[now[0]][now[1]]){
                    case 0:
                        now[1]++;
                      break;
                    case 1:
                        now[1]--;
                        break;
                    case 2:
                        now[0]--;
                        break;
                    case 3:
                        now[0]++;
                        break;
                    default:
                        //cout << "ないない";
                        break;
                }

                if(now[0] == i && now[1] == l){//これうず
                    //blist = blist_;
                    //cout <<"あたり\n";
                    for(int q=0;q<h;q++){
                        for(int p=0;p<w;p++){
                            if(blist_[q][p] == true){
                                blist[q][p] = true;
                            }
                        }
                    }
                    uzu = false;
                    uz++;
                }
                if(-1<now[0]&&now[0]<h+1&&-1<now[1]&&now[1]<w+1){//これ範囲内
                }else{
                    for(int q=0;q<h;q++){
                        for(int p=0;p<w;p++){
                            blist_[q][p] = false;
                        }
                    }
                    //fill(blist_.begin(),blist_.end(), false);
                    flag = false;
                    //cout <<"範囲外";
                }
            }
        }
    }
    cout << uz;
    return 0;
}