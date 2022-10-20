class Solution {
    int[][] rotateMatrix(int M, int N, int mat[][]) {
  
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
 
        // swap columns
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N / 2; j++)
            {
                int temp = mat[i][j];
                mat[i][j] = mat[i][N - j - 1];
                mat[i][N - j - 1] = temp;
            }
        }
        return mat;
    }
 
}