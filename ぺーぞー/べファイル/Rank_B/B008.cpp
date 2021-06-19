#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int i, j;
    int sumProfit = 0;

    for (i = 0; i < m; ++i)
    {
        int sum = 0;
        for (j = 0; j < n; ++j)
        {
            int tmp;
            scanf("%d", &tmp);
            sum += tmp;
        }
        if(sum > 0)
        {
            sumProfit += sum;
        }
    }

    if(sumProfit <= 0)
    {
        cout << 0 << endl;
    }else
    {
        cout << sumProfit << endl;
    }

        return 0;
}