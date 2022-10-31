class Solution{
public:	
		
	string removeDups(string S) 
	{
	  string ans= "";

     ans.push_back(S[0]);

     for(int i =1;i < S.length();i++){

         size_t found = ans.find(S[i]);

         if(found == string::npos){

             ans.push_back(S[i]);

         }
     }

     return ans;

	}
};