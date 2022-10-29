// find first set bit means find the position of right most set bit...


#include<bits/stdc++.h>
using namespace std;

int main(){
  
   // input n = 18 ( 010010 )
    int n;
    cin>>n;
  
  // one's comp. of number n...
    int onesComp = ~n; // 101101 
  
  // two's comp. of number n...
    int twosComp = onesComp+1; // 101110
  
  // and of n with two's comp...
    int x = n & twosComp; // 000010 
    // int x =  (n&-n);
  
    cout<<x<<endl; // 000010 == 2 
  
    return 0;
}

// 18  => 2 
