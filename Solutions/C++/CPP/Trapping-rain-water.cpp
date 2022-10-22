// Problem Link : https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621

class Solution{
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int> l_max(n);
        vector<int> r_max(n);
        long long count = 0;
        l_max[0] = arr[0];
        r_max[n-1] = arr[n-1];
        for(int i=1;i<n;i++){
            l_max[i] = max(l_max[i-1],arr[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            r_max[i] = max(r_max[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++){
            count+=min(l_max[i],r_max[i]) - arr[i];
        }
        return count;
    }
};
