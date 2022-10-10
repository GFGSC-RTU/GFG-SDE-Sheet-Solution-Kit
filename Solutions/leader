

// Problem link : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

//Solution 
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
         int i,r=INT_MIN;
         for(i=n-1;i>=0;i--){
            if(a[i] >= r){
                v.push_back(a[i]);
}
            r = max(a[i],r);
}
            reverse(v.begin(),v.end());
            return v;
    }
};
