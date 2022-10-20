# https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution:
    ##Complete this function
    #Function to rearrange  the array elements alternately.
    def rearrange(self,arr, n): 
        ##Your code here
        m=len(arr)

        c=0

        u=[]

        for k in range(len(arr)):

            u.append(arr[k])

        for j in range(len(arr)):

            if j%2==0:

                arr[j]=u[m-1]

                m=m-1

            else:

                arr[j]=u[c]

                c=c+1
