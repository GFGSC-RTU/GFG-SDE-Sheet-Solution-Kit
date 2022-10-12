queue<int> q1;
queue<int> q2;
void QueueStack :: push(int x)
{
    q2.push(x);
    while(!q1.empty())
    {
        int a=q1.front();
        q2.push(a);
        q1.pop();
    }
    while(!q2.empty())
    {
        int a=q2.front();
        q1.push(a);
        q2.pop();
    }
}
int QueueStack :: pop()
{
    if(q1.empty())
    {
        return -1;
    }
    int a=q1.front();
    q1.pop();
    return a;
}
