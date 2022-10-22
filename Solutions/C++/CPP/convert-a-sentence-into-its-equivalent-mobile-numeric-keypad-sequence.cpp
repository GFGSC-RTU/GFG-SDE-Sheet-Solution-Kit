//Problem Link->https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1?page=3&curated[]=1&sortBy=submissions
/*
Problem Statement->
Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.
*/

//Code

string printSequence(string S)
{
    
    //assigned values to every possible character
    string dp[26]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    string ans="";
    for(auto it:S){
        if(it==' '){
            ans+="0";
        }else{
            ans+=dp[it-'A'];
        }
    }
    return ans;
}
