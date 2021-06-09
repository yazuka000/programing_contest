#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<char> data(n);
    vector<char> input(n);

    int count = 0, max_count = 0;
    bool prev_combo = true;
    bool combo = true;
    vector<bool> prev_long_note(n);
    bool pass = true;
    vector<bool> long_note(n);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            char tmp;
            cin >> tmp;
            data[j] = tmp;
            if (i != 0)
            {
                prev_long_note[j] = long_note[j];
                prev_combo = combo;
            }
            else
            {
                prev_long_note[j] = false;
                prev_combo = true;
            }
            if (data[j] == '#')
            {
                long_note[j] = true;
            }
            else
            {
                long_note[j] = false;
            }
        }
        cin;
        for (int j = 0; j < n; ++j)
        {
            char tmp;
            cin >> tmp;
            input[j] = tmp;

            if (pass)
            {
                if (data[j] == '#' && input[j] == '-')
                {
                    combo = false;
                    count = 0;
                    pass = false;
                }
                else if (prev_long_note[j] == true && prev_combo == false && long_note[j] == true)
                {
                    combo = false;
                    count = 0;
                    pass = false;
                }
                else if (data[j] != '#' && data[j] != input[j])
                {
                    combo = false;
                    count = 0;
                    pass = false;
                }
                else
                {
                    combo = true;
                }
            }
        }

        if (combo == true)
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        pass = true;
        //cout << "prev_combo:" << prev_combo <<  ", combo:" << combo << ", count:" << count << endl;
    }

    cout << max_count << endl;
    return 0;
}