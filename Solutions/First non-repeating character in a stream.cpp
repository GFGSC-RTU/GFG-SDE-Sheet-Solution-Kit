// problem link-- https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

// #include<bits/stdc++.h>

#include<iostream>
#include<unordered_map>
#include<queue>
#include<string>
using namespace std;


 class Solution{
    public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> count;
		    queue<int> q;
		    string ans;
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        
		        count[ch]++;
		        
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(count[q.front()]>1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		            
		        }
		        if(q.empty())
		          ans.push_back('#');
		    }
		    return ans;
		}

};

int main(){
    int tc;
    cin>>tc;
    while(tc--){
            string A;
            cin>>A;
            Solution obj;
            string ans= obj.FirstNonRepeating(A);
            cout<<ans<<"\n";
    }
    return 0;
}
