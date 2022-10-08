#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    int platforms_required=1,result=1,j=0,i=1;
    
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {
        platforms_required++;
        i++;
        }
        
    else if(arr[i]>=dep[j])
    {
        platforms_required--;
        j++;
    }
    
    if(platforms_required>result)
    result=platforms_required;
    
    
    }
    
    return result;
    	
    	
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
} 