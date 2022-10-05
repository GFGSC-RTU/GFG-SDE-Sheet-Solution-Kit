#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void arrange(long long arr[], int n) {

        int a[n];
        for(int i=0;i<n;i++){
            a[i]=arr[arr[i]];
        }
        for(int i=0;i<n;i++){
            arr[i]=a[i];
        }

    }
};

int main(){

        int n;
        //size of array
        cin>>n;
        long long A[n];

        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);

        //printing the elements
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;

    return 0;
}
