#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k, s, t;
    cin >> k >> s >> t;

    vector<string> answers;
    answers.emplace_back("ABC");
    for(int i = 1; i < k; i++){
        string tmp = "";
        tmp = 'A' + answers[i - 1] + 'B' + answers[i - 1] + 'C';
        answers.emplace_back(tmp);
    }

    s--;
    t -= s;
    string ans = answers[k - 1].substr(s, t);
    cout << ans << endl;
    return 0;
}