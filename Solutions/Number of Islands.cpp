#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &M, int i, int j, int ROW,
		int COL)
{
	if (i < 0 || j < 0 || i > (ROW - 1) || j > (COL - 1) || M[i][j] != 1)
	{
		return;
	}

	if (M[i][j] == 1)
	{
		M[i][j] = 0;
		DFS(M, i + 1, j, ROW, COL);	 //right side traversal
		DFS(M, i - 1, j, ROW, COL);	 //left side traversal
		DFS(M, i, j + 1, ROW, COL);	 //upward side traversal
		DFS(M, i, j - 1, ROW, COL);	 //downward side traversal
		DFS(M, i + 1, j + 1, ROW, COL); //upward-right side traversal
		DFS(M, i - 1, j - 1, ROW, COL); //downward-left side traversal
		DFS(M, i + 1, j - 1, ROW, COL); //downward-right side traversal
		DFS(M, i - 1, j + 1, ROW, COL); //upward-left side traversal
	}
}

int countIslands(vector<vector<int>> &M)
{
	int ROW = M.size();
	int COL = M[0].size();
	int count = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (M[i][j] == 1)
			{
				count++;
				DFS(M, i, j, ROW, COL); //traversal starts from current cell
			}
		}
	}
	return count;
}

int main()
{
	vector<vector<int>> M = {{1, 1, 0, 0, 0},
							{0, 1, 0, 0, 1},
							{1, 0, 0, 1, 1},
							{0, 0, 0, 0, 0},
							{1, 0, 1, 0, 1}};

	cout << "Number of islands is: " << countIslands(M);
	return 0;
} 


