// https://practice.geeksforgeeks.org/problems/common-elements/0
class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        multiset<int>s;
        vector<int>ans;
        for(int i =0;i<v2.size();i++){
            s.insert(v2[i]);
        }
        for(int i=0;i<v1.size();i++){
            if(s.find(v1[i])!=s.end()){
                ans.push_back(v1[i]);
                s.erase(s.find(v1[i]));
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
