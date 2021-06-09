#include <iostream>
#include <string>
using namespace std;

bool CompareWords(string s1, string s2)
{
    // cout << s1 << " " << s2 << endl;
    return s1 == s2;
}

int main(void)
{
    int n;
    cin >> n;

    string ans;
    cin >> ans;
    for (int i = 1; i < n; ++i)
    {
    MERGE:
        string tmp;
        cin >> tmp;
        for (int j = tmp.size(); j > 0; --j)
        {
            if (ans.size() < j)
                continue;
            if (CompareWords(ans.substr(ans.size() - j, j), tmp.substr(0, j)))
            {
                ans += tmp.substr(j, tmp.size() - j);
                goto MERGE;
            }
        }
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}