/* sample input
125

9999999999
*/


/* 実装方針  ABC045
入力値が125の場合、考えられる数式としては、

125、1+25、12+5、1+2+5
4通りがあります。

それぞれの数式を計算すると、これらの総和は 
125+26+17+8=176
となります。
*/

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main() {
	string s; 
	cin >> s; 
	
	int n = s.size(); 
	ll res = 0; 
	
    // bit全探索をしている
    // bitが、2の(n-1)乗通りの探索を行う
	for (int i = 0; i < 1<<(n - 1); i++) {

		ll num = 0; 

		for (int j = 0; j <= n; j++) {

			if(j == n){
                res += num; 
			}else{
				num = num * 10 + s[j] - '0'; 
			    //cout << num << "\n";
			
				if (i & 1<<j){
                    res += num;
                    num = 0; 
                }
			}
		}
	}
	cout << res; 
}




/* 参考回答
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){

    string s;
    cin >> s;

    ll ans = 0;

    // bit全探索をしている
    // bitが、2の(s.size()-1)乗通りの探索を行う
    for (ll bit = 0; bit < (1 << s.size() - 1); bit++){
        
        // bitset<n>とは、nの数だけbool型を持った配列を定義できる
        bitset<10> val(bit);
        ll tmp = s.at(0) - '0';

        rep(i, s.size() - 1){
            if(val.test(s.size() - i - 2)){
                ans += tmp;
                tmp = 0;
            }else{
                tmp *= 10;
            }

            tmp += s.at(i + 1) - '0';
        }

        ans += tmp;
    }

    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    ll ans = 0;
    for (ll bit = 0; bit < (1 << s.size() - 1); bit++)
    {
        bitset<10> val(bit);
        ll tmp = s.at(0) - '0';
        rep(i, s.size() - 1)
        {
            if (val.test(s.size() - i - 2))
            {
                ans += tmp;
                tmp = 0;
            }
            else
            {
                tmp *= 10;
            }
            tmp += s.at(i + 1) - '0';
        }
        ans += tmp;
    }

    cout << ans << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string S;
  cin >> S;
  int N = S.size();
  
  long long sum = 0;
  
  for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
    long long ret = 0;
    for (int i = 0; i < (N - 1); i++) {
      ret *= 10;
      ret += S[i] - '0';
      
      if (bit & (1 << i)) {
        sum += ret;
        ret = 0;
      }
    }  
    
    ret *= 10;
    ret += S.back() - '0';
    sum += ret;
    
  }
   cout << sum << endl;
  
} 

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main() {
	string s; 
	cin >> s; 
	
	int n = s.size(); 
	ll res = 0; 
	
	for (int i = 0; i < 1 << (n - 1); i++) {
		ll num = 0; 
		for (int j = 0; j <= n; j++) {
			if (j == n) res += num; 
			else {
				num = num * 10 + s[j] - '0'; 
			//cout << num << "\n";
			
				if (i & 1 << j) res += num, num = 0; 
			}
		}
	}
	cout << res; 
}
*/