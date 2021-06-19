#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool CheckDegit(int tgt, int from, int to)
{
    if (tgt >= from && tgt <= to)
        return true;
    else
        return false;
}

int main(void)
{
    string targetIPstr;
    cin >> targetIPstr;
    pair<int, int> ipRange[4];
    stringstream ss{targetIPstr};
    for (int i = 0; i < 4; ++i)
    {
        string buffer;
        getline(ss, buffer, '.');
        if (buffer == "*")
        {
            ipRange[i] = make_pair(0, 255);
        }
        else if (buffer.substr(0, 1) != "[")
        {
            ipRange[i] = make_pair(stoi(buffer), stoi(buffer));
        }
        else
        {
            int index = buffer.find("-");
            string min = buffer.substr(1, index - 1);
            string max = buffer.substr(index + 1, buffer.size() - 1);
            ipRange[i] = make_pair(stoi(min), stoi(max));
        }
    }

    int num;
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        string info[8];
        for (int j = 0; j < 8; ++j)
        {
            cin >> info[j];
        }
        cin.ignore();
        string junk;
        getline(std::cin, junk);

        bool hasTargetIP = true;
        stringstream ss{info[0]};
        for (int j = 0; j < 4; ++j)
        {
            string buffer;
            getline(ss, buffer, '.');
            hasTargetIP = CheckDegit(stoi(buffer), ipRange[j].first, ipRange[j].second);
            if (!hasTargetIP)
                break;
        }

        if (hasTargetIP)
            cout << info[0] << " " << info[3].substr(1) << " " << info[6] << endl;
    }

    return 0;
}