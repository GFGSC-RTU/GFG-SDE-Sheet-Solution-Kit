
//problem link-https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/


class Solution
{
    public:
    int prec(char x){
        if(x=='^'){
            return 3;
        }
        else if(x=='*' || x=='/'){
            return 2;
        }
        else if(x=='+' || x=='-'){
            return 1;
        }
        return 0;
    }
    bool isoper(char x){
        if(x=='+' ||x=='-' || x=='*' ||x=='/' ||x=='^'){
            return true;
        }
        return false;
    }
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {string ss="";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() &&st.top()!='('){
                ss+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(!isoper(s[i])){
            ss+=s[i];
        }
        else{
            while(!st.empty() && prec(st.top())>=prec(s[i]) ){
                ss+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ss+=st.top();
        st.pop();
    }
    return ss;
        
        // Your code here
    }
};
