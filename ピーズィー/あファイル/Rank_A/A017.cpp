#include <cstdio>
#include <vector>

using namespace std;

int FindEmptyRow(int x, int blockWid, int rows, const vector<vector<char>> &grid)
{
    bool empty;
    for (int i = 0; i < rows; ++i)
    {
        empty = true;
        for (int j = x; j < x + blockWid; ++j)
        {
            if (grid[i][j] != '.')
            {
                empty = false;
                break;
            }
        }
        if (empty)
            return i;
    }
    return 0;
}

int main(void)
{
    int cols, rows, n;
    scanf("%d %d %d", &rows, &cols, &n);

    vector<vector<char>> grid(rows, vector<char>(cols));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            grid[i][j] = '.';
        }
    }

    for (int i = 0; i < n; ++i)
    {
        int width, height, xPos;
        scanf("%d %d %d", &height, &width, &xPos);

        int invYPos = FindEmptyRow(xPos, width, rows, grid);
        for (int y = 0; y < invYPos + height; ++y)
        {
            for (int x = xPos; x < xPos + width; ++x)
            {
                if (grid[y][x] != '#' && y < invYPos)
                    grid[y][x] = '*';
                else
                    grid[y][x] = '#';
            }
        }
    }

    for (int y = rows - 1; y >= 0; --y)
    {
        for (int x = 0; x < cols; ++x)
        {
            if (grid[y][x] == '*')
                printf(".");
            else
                printf("%c", grid[y][x]);
        }
        printf("\n");
    }
    return 0;
}
