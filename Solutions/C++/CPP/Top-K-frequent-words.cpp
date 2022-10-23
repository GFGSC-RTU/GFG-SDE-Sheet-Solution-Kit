class Solution {
public:
    typedef pair<int,string> ppi;
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        multimap<int,string,greater<int>>ml;
        for(auto i: m)
        {
            ml.insert({i.second,i.first});
            
        }
        int j=0;
        vector<string>v;
        for(auto i:ml)

        {
            v.push_back(i.second);
            j++;
            if(j==k)
                break;
        }
        return v;
    }
};
