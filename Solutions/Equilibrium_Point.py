# https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        sumArr=[]
        sumArr.append(A[0])

        for i in range(1,N):
            sumArr.append(A[i]+sumArr[i-1])

        for i in range(N):
            leftArr=sumArr[i]-A[i]
            rightArr=sumArr[-1]-sumArr[i]


            if leftArr==rightArr:
                return i+1
                
        return -1
