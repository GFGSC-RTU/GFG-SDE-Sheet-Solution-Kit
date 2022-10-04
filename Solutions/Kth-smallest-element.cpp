class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r-l+1);
        return arr[k-1];
    }
};
