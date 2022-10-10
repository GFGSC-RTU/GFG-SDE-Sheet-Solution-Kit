// https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int index=-1;
        int l=0,r=n-1;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(arr[mid]==k)
        {
            index=mid;
            break;
        }
        else if(arr[mid]<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        }
        return index;
    }
};
