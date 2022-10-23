// Problem Link - https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

//Solution

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int temp =0;
        int sum = ((n*(n+1)/2));
        for(int i=0;i<n-1;i++){
            temp+=array[i];
        }
        return sum-temp;
    }
};