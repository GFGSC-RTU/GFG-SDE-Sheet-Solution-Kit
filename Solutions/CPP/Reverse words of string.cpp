class Solution
{
    public:
    string reverseWords(string S) 
    { 
       string s="";

        S="."+S;

        int a=S.size()-1;

        for(int i=S.size()-1; i>=0; i--){

            if(S[i]=='.'){

            s=s+S.substr(i+1,a-i);

            if(i!=0)

            s=s+".";

            a=i-1;

            }

        }

        return s;
    } 
};