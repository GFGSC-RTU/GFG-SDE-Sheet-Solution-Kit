class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        
        //Multiple solutions in mind but i am writing most optimal i thought
        //Using two pointer
        int i=n-1,j=n-1;
        //i storing traversing index
        //j storing max element to right index | or we can store max value
        
        while(i>=0){
            if(a[i]>=a[j]){
                j=i;
                ans.insert(ans.begin(),a[i]);
            }
            i--;
        }
        return ans;
    }
};
