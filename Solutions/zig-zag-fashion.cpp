#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int a[], int n) {
	    // code here
	    bool flag=true;
	    for(int i=0;i<n-1;i++)
	    {
	        if(flag)
	        {
	            if(a[i]>a[i+1])
	            swap(a[i],a[i+1]);
	            
	            flag=false;
	        }
	        
	        else if(!flag)
	        {
	            
	       if(a[i]<a[i+1])
	       swap(a[i],a[i+1]);
	       
	        flag=true;
	            
	        }
	    }
	    
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
int array1[m];

for(int i=0;i<m;i++)
{
cin>>array1[i];
}
Solution ob;
ob.zigZag(array1,m);

for(int i=0;i<m;i++)
{
cout<<array1[i]<<" ";
}

cout<<endl;

}
return 0;
}