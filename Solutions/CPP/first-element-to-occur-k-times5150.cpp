// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]==k){
                return a[i];
            }
        }
        return -1;
    }
};
