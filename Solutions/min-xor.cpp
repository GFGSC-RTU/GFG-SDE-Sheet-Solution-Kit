class TrieNode
{
public:
    TrieNode *child[2];
    TrieNode()
    {
        this->child[0] = NULL;
        this->child[1] = NULL;
    }
};
class Solution
{
public:
    TrieNode *root;
    void insert(int x)
    {
        TrieNode *curr = root;
        bitset<32> bt(x);
        for (int i = 31; i >= 0; i--)
        {
            if (curr->child[bt[i]] == NULL)
                curr->child[bt[i]] = new TrieNode();
            curr = curr->child[bt[i]];
        }
    }
    int minXOR(int x)
    {
        int ans = 0;
        TrieNode *curr = root;
        bitset<32> bt(x);
        for (int i = 31; i >= 0; i--)
        {
            if (curr->child[bt[i]])
                curr = curr->child[bt[i]];
            else
            {
                ans += 1 << i;
                curr = curr->child[!bt[i]];
            }
        }
        return ans;
    }

    int minxorpair(int N, int arr[])
    {
        root = new TrieNode();
        insert(arr[0]);
        int ans = INT_MAX;
        for (int i = 1; i < N; i++)
        {
            ans = min(ans, minXOR(arr[i]));
            insert(arr[i]);
        }
        return ans;
    }
};