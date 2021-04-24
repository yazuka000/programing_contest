/* sample input
10000

1000003

9876543210
*/

#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int cnt_digits(ll N){
    int digits=0;
    while(N>0){
        // 10で割る処理をループし、そのループ数をカウントすることで、桁数を求めている
        N/=10;
        digits++;
    }
    return digits;
}

int main(){
    ll N;
    cin >> N;
    int ans=cnt_digits(N); 
    // 1*N=N max(cnt_digits(1),cnt_digits(N))=cnt_digits(N)

    for(ll A=1LL; A*A<=N; ++A){
        // NがAで割り切れない(整数でない)ときは、次のループに移る
        if(N%A!=0) continue;

        // NをBで割り、変数Bに格納
        const ll B=N/A;

        // AとBの桁数を比較して、大きい方をcurに代入
        const int cur=max(cnt_digits(A),cnt_digits(B));

        // curのほうが桁数が少なかった場合、ansにcurの内容を代入
        if(ans>cur){
            ans=cur;
        } 
    }

    cout << ans << endl;
    return 0; 
}

/* 参考回答
#include <bits/stdc++.h> 
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int cnt_digits(ll N){
    int digits=0;
    while(N>0){
        N/=10;
        digits++;
        return digits;
    }
}

int main(){
    ll N;
    cin >> N;
    int ans=cnt_digits(N); 
    // 1*N=N max(cnt_digits(1),cnt_digits(N))=cnt_digits(N)

    for(ll A=1LL; A*A<=N; ++A){
        if(N%A!=0) continue;
        const ll B=N/A;
        const int cur=max(cnt_digits(A),cnt_digits(B));

        if(ans>cur){
            ans=cur;
        } 
    }

    cout << ans << endl;
    return 0; 
}


#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // 初期値定義
    long long int n, a, b, mina=1e9, minb=1e9;
    string str;
    cin >> n;

    // 処理定義
    for(long long int i=1; i<=n; i++){
        long long int j=n-i;
        if(i*j==n){
            mina=min(mina, i);
            minb=min(minb, j);
        }
    }

    if(mina>minb){
        str=to_string(mina);
    }else{
        str=to_string(minb);
    }


    // 出力定義
    cout << str.size() << endl;
    return 0;
}
*/