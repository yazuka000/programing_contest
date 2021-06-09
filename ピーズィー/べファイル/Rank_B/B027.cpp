#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    int rows, cols, num;
    scanf("%d %d %d", &rows, &cols, &num);

    vector<int> grid(rows * cols);
    for (int i = 0; i < rows * cols; ++i)
    {
        scanf("%d", &grid[i]);
    }

    int turn;
    vector<int> player(num);
    scanf("%d", &turn);

    int playerNum = 0;
    for (int i = 0; i < turn; ++i)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
        x1--;
        x2--;
        y1--;
        y2--;
        if (grid[y1 * cols + x1] == grid[y2 * cols + x2])
        {
            //printf(">>%d %d\n", grid[y1 * cols + x1] , grid[y2 * cols + x2]);
            player[playerNum] += 2;
        }
        else
        {
            playerNum++;
            if (playerNum == num)
                playerNum = 0;
        }
    }

    for (int i = 0; i < num; ++i)
    {
        printf("%d\n", player[i]);
    }

    /*for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", grid[i * cols + j]);
        }
        printf("\n");
    } */
    return 0;
}