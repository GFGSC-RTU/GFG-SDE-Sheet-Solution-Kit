
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int swapBits(unsigned int n)
    {

    	int oddMask=0x55555555;
     int evenMask=0xAAAAAAAA;
     int evenPreserved=evenMask&n;
     int oddPereserved=oddMask&n;
     return (evenPreserved>>1)|(oddPereserved<<1);
    }
};
