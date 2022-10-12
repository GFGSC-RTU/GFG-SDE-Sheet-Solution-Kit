#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isValid(int grid[N][N], int x, int y, int val)
    {
        for (int j = 0; j < 9; j++)
        {
            if (grid[x][j] == val)
            {
                return false;
            }
        }

        for (int i = 0; i < 9; i++)
        {
            if (grid[i][y] == val)
            {
                return false;
            }
        }

        int subi = x / 3 * 3;
        int subj = y / 3 * 3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (grid[subi + i][subj + j] == val)
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool solve(int grid[N][N], int i, int j)
    {
        if (i == 9)
        {
            return true;
        }

        int ni = 0;
        int nj = 0;

        if (j == 9 - 1)
        {
            ni = i + 1;
            nj = 0;
        }
        else
        {
            ni = i;
            nj = j + 1;
        }

        if (grid[i][j] != 0)
        {
            return solve(grid, ni, nj);
        }
        else
        {
            for (int pos = 1; pos <= 9; pos++)
            {
                if (isValid(grid, i, j, pos) == true)
                {
                    grid[i][j] = pos;
                    if (solve(grid, ni, nj))
                        return true;
                    grid[i][j] = 0;
                }
            }
        }

        return false;
    }

public:
    // Function to find a solved Sudoku.
    bool SolveSudoku(int grid[N][N])
    {
        return solve(grid, 0, 0);
    }

    // Function to print grids of the Sudoku.
    void printGrid(int grid[N][N])
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << grid[i][j] << " ";
            }
        }
    }
};