#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main(void){
    int n,even,odd,a;
    long buff;
    string buf;
    a = 0;
    even = 0;
    odd = 0;
    vector<string> card;
    vector<int> ans;
    int num[32];
    int gusu;
    int aa,ab;
    //int kisu[7];
    cin >> n;
    for(int i = 0;i<n;i++){
        a = 0;
    even = 0;
    odd = 0;
        cin >> buf;
        buf.pop_back();
        card.push_back(buf);
        //cout << card[0] << "\n";
        istringstream ss(buf);
        //buff = atoi(buf.c_str());
        ss >> buff;
        //cout << buff << "\n";;
        //intかそれぞれの桁をint配列に分解
        //そして偶数と奇数に分解
        for(int x = 0;x<15;x++){
            
            num[x] = buff%10;
            buff = buff/10;
            if(x%2 != 0){
                odd += num[x];
            }else{
                gusu = num[x]*2;//偶数だから二倍しておく
                if(gusu > 9){//もし２桁なら１桁に変形
                    aa = gusu%10;
                    ab = (gusu/10);
                    gusu = aa+ab;
                }
                even += gusu;
                a++;
            }
            //printf("numx:%dodd:%deven:%d\n",num[x],odd,even);
        }
        //////////////////////////////////
        //cout << "test";

        int odd_;

        for (int x = 0;x<10;x++){
            odd_ = odd +x;
            if((even+odd_)%10 == 0){
                printf("%d\n", x);
                break;
            }
        }


    }

    return 0;
}