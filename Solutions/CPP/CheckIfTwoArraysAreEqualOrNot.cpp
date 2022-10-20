class Solution
{
public:
    // Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int flag = -1;
        int i;
        for (i = 0; i < n; i++)
        {
            if (A[i] != B[i])
            {
                flag++;
                break;
            }
        }
        if (i == n && flag == -1)
        {
            flag += 2;
        }
        return flag;
    }
};