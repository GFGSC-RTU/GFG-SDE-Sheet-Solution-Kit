// https://practice.geeksforgeeks.org/problems/count-the-zeros2550/0


class Solution{   
public:
    int first(int arr[], int n, int x){
        int start = 0;
        int end = n-1;
        int res = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(x == arr[mid]){
                res = mid;
                end = mid - 1;
            }else if(x < arr[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return res;
    }
    
    int countZeroes(int arr[], int n) {
        // code here
        int f = first(arr, n, 0);
        int l = n-1;
        return (l-f+1);
    }
};