Class Solution{
    public:
        void merge(long long A[], long long B[], int N, int M) 
        {
    {

            for (int i = 0; i < M; i++)
            {

                if (A[i] > B[0])
                {
                    swap(A[i], B[0]);
                    int j = 0;


                    while (j + 1 < N && B[j] > B[j + 1])

                        swap(B[j], B[j + 1]), j++;
                }
            }

            for (int i = 0; i < M; i++)
                cout << A[i] << " ";

            cout << endl;

            for (int i = 0; i < N; i++)
                cout << B[i] << " ";
     }
};