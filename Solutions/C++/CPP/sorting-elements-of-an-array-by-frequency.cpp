https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
#include <iostream>
#include<map>
#include<set>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	        
	    	//using orderd map
	map<int,int>mp;//key: ith element, value : frequency of element
	for(int i=0;i<n;i++){
	    mp[arr[i]]++;
	}
	set<pair<int,int>>s;
	for(auto it:mp)
	    s.insert({-it.second,it.first});
	    
	for(auto it:s){
	    for(int i=0;i<-1*it.first;i++){
	        cout<<it.second<<" ";
	    }
	}
	    cout<<endl;
	    
	}
	
	
	

	
	return 0;
}
