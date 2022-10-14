class Solution {
  public:
   vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> mat) {
        int row = 0;
        int col = 0;
        int maxRow = M - 1;
        int maxCol = N - 1;
        while(row < maxRow + 1 && col < maxCol + 1){
            if(row == maxRow || col == maxCol){
                break;
            }
            
            int previous = mat[row + 1][col];
            for(int i = col; i <= maxCol; i++){
                int curr = mat[row][i];
                mat[row][i] = previous;
                previous = curr;
            }
            row++;
 
            for(int i = row; i <= maxRow; i++){
                int curr = mat[i][maxCol];
                mat[i][maxCol] = previous;
                previous = curr;
            }
            maxCol--;
        
            if(row < maxRow + 1){
                for(int i = maxCol; i >= col; i--){
                    int curr = mat[maxRow][i];
                    mat[maxRow][i] = previous;
                    previous = curr;
                }
                maxRow--;
            }
         
            if(col < maxCol + 1){
                for(int i = maxRow; i >= row; i--){
                    int curr = mat[i][col];
                    mat[i][col] = previous;
                    previous = curr;
                }
                col++;
            }
        }
        return mat;
    }
};
