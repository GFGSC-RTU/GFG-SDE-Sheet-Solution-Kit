#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>psum;
        // Your code here
        int len=0, temp=0;;
        for(int i=0;i<A.size();i++)
        {
            temp+=A[i];
            if(A[i]==0&&len==0)
            len=1;
            if(temp==0)
            len=i+1;
            if(psum.find(temp)!=psum.end())
            len=max(len,i-psum[temp]);
            else
            psum[temp]=i;
            
        }
        return len;
    }
};


int main()
{
int t;
cin>>t;
while(t--)
{
int m;
cin>>m;
vector<int>array1(m);

for(int i=0;i<m;i++)
{
cin>>array1[i];
}
Solution ob;
cout<<ob.maxLen(array1,m)<<endl;
}
return 0;
}