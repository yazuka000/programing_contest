#include <iostream>
#include <vector>
#include <string>
using namespace std;

string operate(string s){
    char cLast1 = s[s.size() - 1];
    char cLast2 = s[s.size() - 2];

    bool a, b, c, d;
    {
        a = cLast1 == 's' || cLast1 == 'o' || cLast1 == 'x' || cLast1 == 'h' && (cLast2 == 's' || cLast2 == 'c');
        b = cLast1 == 'f';
        c = cLast1 == 'e' && cLast2 == 'f';
        d = cLast1 == 'y' && (cLast2 != 'a' && cLast2 != 'i' && cLast2 != 'u' && cLast2 != 'e' && cLast2 != 'o');
    }

    if(a){
        s.push_back('e');
        s.push_back('s');
    }
    else if(b || c){
        if(b){
            s[s.size() - 1] = 'v';
            s.push_back('e');
            s.push_back('s');
        }
        else{
            s[s.size() - 2] = 'v';
            s[s.size() - 1] = 'e';
            s.push_back('s');
        }
    }
    else if(d){
        s[s.size() - 1] = 'i';
        s.push_back('e');
        s.push_back('s');
    }
    else{
        s.push_back('s');
    }

    return s;
}

int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    vector<string> answers(n);
    for(int i = 0; i < n; i++){
        answers[i] = operate(words[i]);
    }

    for(auto ans : answers){
        cout << ans << endl;
    }
    return 0;
}