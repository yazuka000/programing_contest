#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

const vector<int> segments = {0b1111110, 0b0110000, 0b1101101, 0b1111001, 
                                0b0110011, 0b1011011, 0b1011111, 0b1110010, 0b1111111, 0b1111011};
const string YES = "Yes";
const string NO = "No";

int bin2int(vector<int> &a){
    int ret = 0;
    for(int i = 0; i < 7; i++){
        ret += a[i] * pow(2, 6 - i);
    }
    return ret;
}

void isCorrect(int a, int b){
    auto iter_a = find(segments.begin(), segments.end(), a);
    auto iter_b = find(segments.begin(), segments.end(), b);

    if(iter_a == segments.end() || iter_b == segments.end()){
        cout << NO << endl;
    }
    else{
        cout << YES << endl;
    }
    return;
}

void mirror(vector<int> &a, vector<int> &b){
    for(int i = 0; i < 6; i++){
        swap(a[i], b[(6 - i) % 6]);
    }
    swap(a[6], b[6]);
    return;
}

void rotate(vector<int> &a, vector<int> &b){
    for(int i = 0; i < 6; i++){
        swap(a[i], b[(i + 3) % 6]);
    }
    swap(a[6], b[6]);
    return;
}

void debug(vector<int> &a){
    for(auto x : a) cout << x << " ";
    cout << endl;
}

int main(){
    vector<int> a(7, false), b(7, false);
    for(int i = 0; i < 7; i++) cin >> a[i];
    for(int i = 0; i < 7; i++) cin >> b[i];

    {
        int ia = bin2int(a);
        int ib = bin2int(b);
        // debug(a); debug(b);
        isCorrect(ia, ib);
    }

    {
        vector<int> ma = a, mb = b;
        mirror(ma, mb);
        int mia = bin2int(ma);
        int mib = bin2int(mb);
        // debug(ma); debug(mb);
        isCorrect(mia, mib);
    }

    {
        vector<int> ra = a, rb = b;
        rotate(ra, rb);
        int ria = bin2int(ra);
        int rib = bin2int(rb);
        // debug(ra); debug(rb);
        isCorrect(ria, rib);
    }

    return 0;
}