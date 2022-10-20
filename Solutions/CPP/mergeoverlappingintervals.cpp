
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>> ans;
        if(arr.size() == 0) return ans;
        sort(arr.begin(),arr.end());
        vector<int> temp = arr[0];
        for(auto it: arr)
        {
            if(it[0]<=temp[1])
            {
                temp[1] = max(it[1],temp[1]);
            }
            else
            {
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
