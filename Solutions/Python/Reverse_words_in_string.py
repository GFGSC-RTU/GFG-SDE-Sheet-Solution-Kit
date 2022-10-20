# https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here 
        lst=S.split('.')
        
        return ('.'.join(lst[::-1]))
