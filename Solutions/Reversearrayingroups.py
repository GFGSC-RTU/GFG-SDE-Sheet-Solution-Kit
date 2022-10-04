#https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/0

class Solution:	
    #Function to reverse every sub-array group of size k.
	def reverseInGroups(self, arr, N, K):
		# code here 
		i=0
        while(i<=N):
            lst = arr[i:i+K][::-1]
            arr[i:i+K] = lst
            i+=K
        return arr
