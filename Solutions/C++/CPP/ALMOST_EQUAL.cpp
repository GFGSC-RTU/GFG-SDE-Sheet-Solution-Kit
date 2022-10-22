// Problem link : https://practice.geeksforgeeks.org/problems/almost-equal/0

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
        
        // Your code here
        int count = 0;
        int a[26] = {0};
        int b[26] = {0};
        for(int i=0; i<s1.length(); i++){
            a[s1[i] - 'a']++;
        }
        for(int i=0; i<s2.length(); i++){
            b[s2[i] - 'a']++;
        }
        
        for(int i=0; i<=25; i++){
            count += abs(a[i] - b[i]);
        }
        return count;
        
    }
};