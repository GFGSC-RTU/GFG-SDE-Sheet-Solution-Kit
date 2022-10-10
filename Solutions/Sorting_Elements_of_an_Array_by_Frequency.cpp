Problem link : https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0

// Solution 
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t, n, ele;
	cin >> t;
	while(t--){
	    cin >> n;
	    vector<int> v;
	    unordered_map<int, int> umap;
	    for(int i=0; i<n; i++){
	        cin >> ele;
	        v.push_back(ele);
	        umap[ele]++;
	    }
	    sort(v.begin(), v.end(), [&](int a, int b) {return umap[a] != umap[b] ? umap[a] > umap[b] : a < b; });
	    for(int i=0; i<n; i++){
	        cout << v[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}