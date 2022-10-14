
class Solution{ 

public static int findby_rec(int a[], int index, int min, int max, int N)

{

        if(index >= N)

        {

            return (min+max);

        }

        if(min > a[index])

        {

            min = a[index];

        }

        if(max < a[index])

        {

            max = a[index];

        }

        return findby_rec(a, index+1, min, max, N);

    }

    public static int findSum(int A[],int N) 

    {

        //code here

        int min = A[0];

        int max = A[0];

        return findby_rec(A, 1, min, max, N);

    }

}
