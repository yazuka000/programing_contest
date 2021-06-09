#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> threePointStoresOfA;
    vector<int> isVisited(n, -1);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 3){
            threePointStoresOfA.emplace_back(i);
        }
        if(tmp != 0){
            isVisited[i] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        int tmpK = 0;
        vector<int> point(n, 0);
        for(int j = 0; j < n; j++){
            cin >> point[j];
        }
        for(auto restaurant : threePointStoresOfA){
            if(point[restaurant] == 3){
                tmpK++;
            }
        }
        if(tmpK >= k){

        }
    }
}