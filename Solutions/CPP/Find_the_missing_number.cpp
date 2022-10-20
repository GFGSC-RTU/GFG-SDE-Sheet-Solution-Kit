#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=(n*(n+1))/2;
    int arr_sum=0;
    for(int i=0;i<n-1;i++) arr_sum+=arr[i];
    cout<<sum-arr_sum<<endl;
}