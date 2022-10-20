Problem link;---https://practice.geeksforgeeks.org/problems/rotate-bits4524/1




class Solution
{
  public:
       vector <int> rotate (int n, int d)
       {
           //code here.
           d=d%16;
           
           int ls,rs,a,b;
           
           ls= (n<<d);
           
           rs= n>>(16-d);
           
           a= (rs | ls ) & ((1<<16)-1);
       
           rs = (n>>d);
           
           ls= n<<(16-d);
           
           b= (rs | ls) & ((1<<16)-1);
           
           return {a,b};
           
       }
};

