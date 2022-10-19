// Problem Link:-https://leetcode.com/problems/reverse-bits/
#include<bits/stdc++.h>
uint32_t reverseBits(uint32_t n) {
 uint32_t rev = 0;
 for(int i=0;i<32;i++)
 {
     uint32_t x=0;
     x = n&(1<<i);
     if(x) rev = rev| (1<<(31-i));
 }
 return rev;
}

int main()
{
  uint32_t x= 00000010100101000001111010011100;
  cout<<reverseBits(x);
  return 0;
}
