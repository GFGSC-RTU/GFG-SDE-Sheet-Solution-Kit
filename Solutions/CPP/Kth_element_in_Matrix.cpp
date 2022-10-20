problem link : https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

// Solution
int kthSmallest(int matrix[MAX][MAX], int n, int k)
{
  //Your code here
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                pq.push(matrix[i][j]);
                if(pq.size() > k){
                    pq.pop();
                }
            }
        }
        return pq.top();
}
