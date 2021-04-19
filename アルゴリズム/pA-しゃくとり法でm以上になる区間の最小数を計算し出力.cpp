/* sample input
5 1
1 1 1 1 1

6 16
2 0 2 2 2 2
*/

/* 実装方針
問題文中に「連続する区間の最小の長さ」とあるのでしゃくとり法を念頭において考えます。
まず、純粋に前から積を取っていき、積が K 以上になるまで先頭の要素を掛け、
K 以上のときは末尾の要素で積を割るというしゃくとり法が思いつくと思います。

しかし、この方法だと 0 が含まれていることによってうまく答えが出ません。

・０ が含まれているときの対処
一度しゃくとり法の範囲に ０ が入ってしまうと、それ以降の積の値が全て ０ になってしまいます。
Kが ０ より大きいので、積の値が ０ のとき、すなわちしゃくとり法の範囲に ０ があるかぎり条件を満たすことは絶対にありません。

なので、一度しゃくとりの範囲内に ０ が入ってしまった時は、末尾を ０ の次の要素まで動かしてしまって良いです。

こうすることで ０ があっても、それ以降のしゃくとりをうまく行うことができます。
例として次の入力例のとき、図の通りしゃくとり法を行えば良いです。
*/

#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    // 初期値
    long long int ans = 1e9, n, k;
    cin >> n >> k;
    vector<long long int> A(n);

    //入力
    rep(i, n) cin >> A[i];
    
    long long int sum = A[0], h = 1, l = 0;

    // 処理

    // しゃくとり法
    while(1){
        // 末尾lが配列の要素数と同数になったらbreakする
        if(l == n){
            break;
        // 先頭hと末尾lが同数になったらhをプラスする
        }else if(h == l){
            h++;
        }else if(k <= sum){
            ans = min(ans, h-l);
            sum /= A[l];
            l++;

        }else{
            // 先頭hが配列の要素数と同数になったらbreakする
            if(h == n){
                break;
            
            // 指定要素が0だった場合、そのときのhの値をlに代入し、先頭配列を一気に移動する
            }else if(A[h-1] == 0){
                long long int add=1;
                l = h;

                while(l < n && A[l] == 0){
                    l = h+add;
                    add++;
                }

                // 末尾lが配列の要素数と同数になったらbreakする
                if(l == n){
                    break;
                }

                h = l+1;
                sum = A[l];

            }else{
                sum *= A[h];
                h++;
            }
        }
    }

    // 出力
    cout << ans << endl;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int ans = 1e9,N,K;
    cin >> N >> K;
    vector<long long int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    long long int sum = A[0], h = 1, l = 0;

    while(1){
        if(l == N){
            break;
        }else if(h == l){
            h++;
        }else if(K <= sum){
            ans = min(ans,h-l);
            sum /= A[l];
            l++;
        }else{
            if(h == N){
                break;
            }else if(A[h-1] == 0){
                long long int add=1;
                l = h;

                while(l < N && A[l] == 0){
                    l = h+add;
                    add++;
                }

                if(l == N){
                    break;
                }

                h = l+1;
                sum = A[l];
            }else{
                sum *= A[h];
                h++;
            }
        }
    }

    cout << ans << endl;
}
*/