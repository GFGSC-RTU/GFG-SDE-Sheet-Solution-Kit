  int sum1 = 0, sum2 =0;

      sort(A,A+n);

      sort(B,B+m);

      for(int i=0;i<n;i++)

      {

          sum1 += A[i];

      }

       for(int i=0;i<m;i++)

      {

          sum2 += B[i];

      }

       if(sum1==sum2)

      return 1;

      

      int i=0,j=0;

      while(i<n&&j<m)

      {

          int x = A[i], y = B[j];

          swap(A[i],B[j]);

          sum1 = sum1-x+A[i];

          sum2 = sum2-y+B[j];

          if(sum1==sum2)

          return 1;

          else if(sum1<sum2)

         {

              j++;

         }

          else if(sum1>sum2)

          {

              i++;

          }

          

        

      }

      return -1;