// Problem link --> https://www.geeksforgeeks.org/k-th-element-two-sorted-arrays/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int a1[m],a2[n];

    int i,j;

    for(i=0;i<m;i++)
    cin>>a1[i];

    for(i=0;i<n;i++)
    cin>>a2[i];

    int k;
    cin>>k;

    int a3[m+n];

    for(i=0;i<m;i++)
    a3[i]=a1[i];

    for(i=m,j=0;i<m+n,j<n;i++,j++)
    a3[i]=a2[j];

    sort(a3,a3+m+n);

    cout<<a3[k-1];

    return 0;
}