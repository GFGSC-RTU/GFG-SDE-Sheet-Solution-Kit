/*
https://practice.geeksforgeeks.org/problems/31272eef104840f7430ad9fd1d43b434a4b9596b/1

Search Pattern (Rabin-Karp Algorithm)
MediumAccuracy: 47.93%Submissions: 12312Points: 4
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given two strings, one is a text string and other is a pattern string. The task is to print the indexes of all the occurences of pattern string in the text string. For printing, Starting Index of a string should be taken as 1.

Example 1:

Input:
S = "batmanandrobinarebat", pat = "bat"
Output: 1 18
Explanation: The string "bat" occurs twice
in S, one starts are index 1 and the other
at index 18. 
â€‹Example 2:

Input: 
S = "abesdu", pat = "edu"
Output: -1
Explanation: There's not substring "edu"
present in S.

Your Task:
You don't need to read input or print anything. Your task is to complete the function search() which takes the string S and the string pat as inputs and returns an array denoting the start indices (1-based) of substring pat in the string S. 


Expected Time Complexity: O(|S|*|pat|).
Expected Auxiliary Space: O(1).


Constraints:
1<=|S|<=105
1<=|pat|<|S|
*/

class Solution
{
    public:
        vector <int> search(string pat, string txt)

        {

            vector<int> ans;

            int windowSize=pat.size();

            int n = txt.size();

            

            int patternHash=0;

            int textWindowHash=0;

            int q = INT_MAX;

            int d = 256;

            int h = pow(d,windowSize-1);

            

            bool flag=true;

            for(int i=0;i<windowSize;++i){

                patternHash=(patternHash*d + pat[i])%q;

                textWindowHash=(textWindowHash*d + txt[i])%q;

                if(txt[i]!=pat[i]){

                    flag=false;

                }

            }

            

            if(flag){

                ans.push_back(1);

            }

            

            int i=1,j=windowSize;

            while(j<n){

                textWindowHash= (d*(textWindowHash - txt[i-1]*h) + txt[j])%q;

                

                if(textWindowHash==patternHash){

                    int k;

                    for(k=0;k<windowSize;++k){

                        if(txt[i+k]!=pat[k]){

                            break;

                        }

                    }

                    if(k==windowSize){

                        ans.push_back(i+1);

                    }

                }

                i++;j++;

            }

            

            if(!ans.size()){

                ans.push_back(-1);

            }

            

            return ans;

        }
     
};
