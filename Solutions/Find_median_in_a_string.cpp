Problem link : https://practice.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1

// Solution
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;
    void insertHeap(int &x)
    {
        if(minh.size() > 0 && x > minh.top()){
            minh.push(x);
        }else{
            maxh.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(maxh.size() - minh.size() == 2){
            minh.push(maxh.top());
            maxh.pop();
        }else if(minh.size() - maxh.size() == 2){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxh.size() + minh.size() == 0){
            return -1;
        }else if(maxh.size() == minh.size()){
            return (maxh.top() + minh.top())/2;
        }else if(maxh.size() > minh.size()){
            return maxh.top();
        }else if(maxh.size() < minh.size()){
            return minh.top();
        }
    }
};