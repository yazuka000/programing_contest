#include <iostream>
#include <vector>
#include <algorithm>
#include <set> 
#include <cmath>
using namespace std;

int main(void){

    cin.tie(0);
    ios::sync_with_stdio(false);

    set<long> st; 
    int a[3],k;
    cin >> a[0] >> a[1] >> a[2] >> k;

    sort(a,a+3);

    st.insert(1);
    st.insert(a[0]);
    st.insert(a[1]);
    st.insert(a[2]);

    int x=0;
    int y=0;
    int z=0;

    int aaa = 0;

    for(int aa = 0; aa<100;aa++){
        for(int bb = 0; bb<100;bb++){
            for(int cc = 0; cc<100;cc++){
                st.insert(pow((double)a[0],(double)aa)*pow((double)a[1],(double)bb)*pow((double)a[2],(double)cc));
            }
        }
    }

    for(auto x : st) {
        aaa++;
        if(aaa == k+1){
            //std::cout << aaa << ";" << x << "\n";     // テスト用
            cout << x << "\n"; //答え出力用
        }
        
    }

    return 0;
}