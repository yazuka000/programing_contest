#include <iostream>

using namespace std;

int CalcDegit(int n)
{
    int ans = n * 2;
    if (ans / 10 > 0)
        ans = ans / 10 + ans % 10;
    return ans;
}

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        int sum = 0;
        for (int i = 0; i < 8; ++i)
        {
            sum += CalcDegit(str[2 * i] - '0');
            if (i != 7)
                sum += str[2 * i + 1] - '0';
        }

        if (sum % 10 != 0)
            cout << 10 - (sum % 10) << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}