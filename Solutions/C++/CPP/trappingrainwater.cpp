// Problem Link: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1


class Solution {
 //Solution using 2 Two Pointers
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int res=0;
        int i=0,j=n-1,left_max=0,right_max=0;
        while(i<j){
            if(height[i]<height[j]){
                if(height[i]>left_max) left_max = height[i];
                else res+=left_max-height[i];
                i++;
            } else {
                if(height[j]>right_max) right_max = height[j];
                else res+=right_max-height[j];
                j--;
            }
        }
        return res;
    }
};