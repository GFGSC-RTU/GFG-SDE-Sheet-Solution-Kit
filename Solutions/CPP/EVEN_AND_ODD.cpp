// https://practice.geeksforgeeks.org/problems/even-and-odd/0

class Solution
{
public:
    void reArrange(int arr[], int N)
    {
        // code here
        int i = 0, j = 1;
        while (i < N && j < N)
        {
            if (arr[i] % 2 == 0)
                i += 2;
            if (arr[j] % 2 == 1)
                j += 2;
            else if (arr[i] % 2 == 1 && arr[j] % 2 == 0)
            {
                int val = arr[i];
                arr[i] = arr[j];
                arr[j] = val;
                j += 2;
                i += 2;
            }
        }
    }
};