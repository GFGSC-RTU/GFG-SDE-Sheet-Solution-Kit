//Problem link : https://practice.geeksforgeeks.org/problems/uncommon-characters4932/1


#include <bits/stdc++.h>
using namespace std;
 

void findAndPrintUncommonChars(string str1, string str2)
{  
    string ans = "";
     
    vector<int> used(26, false);
 
    for (int i = 0; i < str1.size(); i++) {
        
        bool found = false;
 
        for (int j = 0; j < str2.size(); j++) {
            
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }
 
        
        if (!found and !used[str1[i] - 'a']) {
            used[str1[i] - 'a'] = true;
            ans += str1[i];
        }
    }
 
    for (int i = 0; i < str2.size(); i++) {
        
        bool found = false;
 
        for (int j = 0; j < str1.size(); j++) {
            
            if (str2[i] == str1[j]) {
                found = true;
                break;
            }
        }
  
        if (!found and !used[str2[i] - 'a']) {
            used[str2[i] - 'a'] = true;
            ans += str2[i];
        }
    }
 
    sort(ans.begin(), ans.end());
   
    if (ans.size() == 0)
        cout << "-1";
     
     
      else
        cout << ans << " ";
}
 
int main()
{
    string str1 = "characters";
    string str2 = "alphabets";
    findAndPrintUncommonChars(str1, str2);
    return 0;
}