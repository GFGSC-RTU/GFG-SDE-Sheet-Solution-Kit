// Problem link https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1


class Solution{
  public:
  
    string LCPUtil(string &str1, string &str2)
    {
        string result = "";
        int len = min(str1.length(), str2.length());
        
        for(int i = 0; i < len; i++)
        {
            if(str1[i] != str2[i])
                break;
            
            result += str1[i];
        }
        
        return result;

    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        string prefix = arr[0];
        
        for(int i = 1; i < N; i++)
            prefix = LCPUtil(prefix, arr[i]);
            
        return prefix;
    }
};