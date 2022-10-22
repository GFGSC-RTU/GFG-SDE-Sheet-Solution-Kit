Problem link : https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

// Solution
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        unordered_map<int, bool> umap;
        for(int i=0; i<N; i++) umap[arr[i]] = true;
        for(int i=0; i<N; i++){
            if(umap.find(arr[i]-1) != umap.end()){
                umap[arr[i]] = false;
            }
        }
        int max_length = 0;
        int max_start_point = 0;
        for(int i=0; i<N; i++){
            if(umap[arr[i]]==true){
                int temp_length = 1;
                int temp_start_point = arr[i];
                
                while(umap.find(temp_start_point + temp_length) != umap.end()){
                    temp_length++;
                }
                     
                if(temp_length > max_length){
                    max_length = temp_length;
                    max_start_point = temp_start_point;
                }
            }
        }
        return max_length;
    }
};