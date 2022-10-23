// Problem statement https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1


#include<bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // Your code here
    stack <char> st;
    
    for(int i = 0; i < x.length(); i++)
    {
        if(st.empty())
            st.push(x[i]);
            
        else if(st.top() == '{' && x[i] == '}' || 
                st.top() == '(' && x[i] == ')' || 
                st.top() == '[' && x[i] == ']')
            st.pop();
        else
            st.push(x[i]);
    }
    
    if(st.empty())
        return true;
    
    return false;
}

int main()
{
    string expr = "{()}[]";

    if(ispar(expr))
        cout << "\nbalanced brackets";
    else
        cout << "\nunbalanced brackets";
}