#Reverse Words in A Given String
#Problem Link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
# User function Template for python3

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        array=S.split(".")
        total=len(array)
        S=""
        for i in range(total-1,0,-1):
           S+=array[i]
           S+="."
        S+=array[0]
        return S