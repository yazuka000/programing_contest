#include <cstdio>
#include <vector>

using namespace std;

int FollowChild(int index, int n, const vector<vector<int>>& members, vector<int>& childs)
{
    int ans = 0;
    for (int i = 0; i < members[index].size(); ++i)
    {
        //printf("index:%d ,memIndex:%d ,mem: %d, ans:%d\n", index, memIndex, mem, ans);

            ans++;
            ans += FollowChild(members[index][i], n, members, childs);

    }
    childs[index] = ans;
    return ans;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    //memData[parantID][n] = directChildID
    vector<vector<int>> memData(n);
    vector<int> childData(n);
    for (int i = 1; i < n; ++i)
    {
        int tmp;
        scanf("%d", &tmp);
        memData[tmp - 1].emplace_back(i);
    }

    FollowChild(0, n, memData, childData);
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", childData[i]);
    }
    return 0;
}