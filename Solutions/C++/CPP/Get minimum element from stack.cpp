// Problem link: https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?page=1&category[]=Stack&sortBy=submissions



class Solution
{
    int minEle;
    stack<int> s;

public:
    int getMin()
    {
        if (s.size() == 0)
        {
            return -1;
        }
        return minEle;
    }

    int pop()
    {
        if (s.size() == 0)
            return -1;
        int x = s.top();
        s.pop();
        if (x >= minEle)
        {
            return x;
        }
        else
        {
            int curr = minEle;
            minEle = 2 * minEle - x;
            return curr;
        }
    }

    void push(int x)
    {

        if (s.size() == 0)
        {
            minEle = x;
            s.push(x);
        }
        else if (x > minEle)
        {
            s.push(x);
        }
        else
        {
            int Curr = x;
            x = 2 * x - minEle;
            s.push(x);
            minEle = Curr;
        }
    }
};