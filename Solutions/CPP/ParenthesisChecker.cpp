
// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        int n=x.length();
        char ch,b;
        if(n%2==0)
        {
          for(int i=0;i<n;i++)
          {
              ch=x[i];
              if(ch=='(' || ch=='{'  || ch=='[')
              st.push(ch);
              else if (ch==')' || ch=='}'  || ch==']')
              {
                  if(st.empty())
                  return false;
                  b=st.top();
                  if((b=='(' && ch==')') || (b=='{' && ch=='}')  || 
                  (b=='[' && ch==']'))
                  {
                      st.pop();
                  }
                  else {
                    return false;
                  }
              }
          }
        }
        else{
            return false;
        }
        return st.empty();
    }

};
