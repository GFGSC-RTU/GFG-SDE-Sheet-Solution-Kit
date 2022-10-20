# https://practice.geeksforgeeks.org/problems/quick-sort/1

class Solution:
    #Function to sort a list using quick sort algorithm.
    def quickSort(self,arr,low,high):
       # code here
        if(low<high):
           p=self.partition(arr,low,high)
           self.quickSort(arr,low,p)
           self.quickSort(arr,p+1,high)
       
   
    def partition(self,arr,low,high):
       # code here
        pivot=arr[low]
        i=low-1
        j=high+1
        while True:
           i=i+1
           while arr[i]<pivot:
               i=i+1
           j=j-1
           while arr[j]>pivot:
               j=j-1
           if i>=j:
               return j
           arr[i],arr[j]=arr[j],arr[i]
