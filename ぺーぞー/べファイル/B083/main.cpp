#include <iostream>
#include <vector>
using namespace std;

struct edge{
    int x1, y1, x2, y2;
};

bool isCross(edge tate, edge yoko){
    int tateX = tate.x1;
    int lower = tate.y1;
    int upper = tate.y2;
    int yokoY = yoko.y1;
    int left = yoko.x1;
    int right = yoko.x2;

    if(tateX < left || right < tateX) return false;
    if(tateX < lower || tateX < upper) return false;
    return true;
}

bool isSquare(edge a, edge b, edge c, edge d){
    if(!isCross(a, c)) return false;
    if(!isCross(a, d)) return false;
    if(!isCross(b, c)) return false;
    if(!isCross(b, d)) return false;
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<edge> yoko, tate;

    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        edge tmp = {x1, y1, x2, y2};
        if(x1 == x2){
            tate.emplace_back(tmp);
        }
        else{
            yoko.emplace_back(tmp);
        }
    }

    int ans = 1e8;
    for(int t1 = 0; t1 < tate.size() - 1; t1++){
        for(int t2 = t1 + 1; t2 < tate.size(); t2++){
            for(int y1 = 0; y1 < yoko.size() - 1; y1++){
                for(int y2 = y1 + 1; y2 < yoko.size(); y2++){
                    auto tate1 = tate[t1];
                    auto tate2 = tate[t2];
                    auto yoko1 = yoko[y1];
                    auto yoko2 = yoko[y2];

                    if(!isSquare(tate1, tate2, yoko1, yoko2)) continue;

                    int height = abs(yoko1.y1 - yoko2.y1);
                    int width = abs(tate1.x1 - tate2.x1);

                    int area = height * width;
                    ans = min(ans, area);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}