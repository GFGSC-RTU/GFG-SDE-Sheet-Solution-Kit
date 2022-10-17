class Solution {
   static int palindromepair(int N, String arr[]) {
       int i,j;
       String k;
       for(i=0;i<N-1;i++)
       {
           for(j=i+1;j<N;j++)
           {
               if(pal(arr[i]+arr[j]))
               {
                   return 1;
               }
               if(pal(arr[j]+arr[i]))
               {
                   return 1;
               }
               
           }
           
           
       }
       return 0;
   }
       static boolean pal(String s)
       {
           StringBuffer str=new StringBuffer(s);
           str.reverse();
           String b=str.toString();
           if(s.equals(b))
           return true;
           else
           return false;
       }
      
   
};