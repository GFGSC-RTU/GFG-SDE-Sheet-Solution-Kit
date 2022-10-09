#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int n;
	cin>>n;
	ll *arr=new ll[n];
	ll *arr2=new ll[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(ll i=0;i<n;i++)
	{
		arr2[i]=arr[i];
	}
	sort(arr2,arr2+n);
	sort(arr,arr+n);
	ll x;
	cin>>x;
	
	ll count=0;
	for(ll i=0;i<n/2;i++)
	{
		ll temp=arr[i];
		temp=abs(x-temp);
		if(binary_search(arr2,arr2+n,temp))
		{
			if(arr[i]<temp)
			cout<<arr[i]<<" and "<<temp<<endl;
			else
			cout<<temp<<" and "<<arr[i]<<endl;
		}
		
	}
	
	
	
	return 0;
}
