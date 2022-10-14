class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)

    {
     vector<int> len;
     sort(arr, arr+n);
     sort(dep, dep+n);
     bool flag = false;
     for( int i = 1; i < n; i++)
     {
         if(arr[i] < dep[i-1])
         {
             flag = false;
             for(int j = 0; j < len.size(); j++)
                 if(len[j] < arr[i])
                 {
                     len[j] = dep[i-1];
                     flag = true;
                     break;
                 }
             if(flag == false) len.push_back(dep[i-1]);
         }
     }
     return len.size()+1;
    }
};
