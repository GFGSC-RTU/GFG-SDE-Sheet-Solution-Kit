
# Link : https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form/

# Problem Statement:
#   Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
# Note: Modify the original array itself.

class Solution:
    def rearrange(self,arr, n): 
        arr.sort()
        arrsmall = []
        arrlarge = []
        for i in range(0,n):
            arrsmall.append(arr[i])
        arr.sort(reverse = True)
        for i in range(0,n):
            arrlarge.append(arr[i])
        temp = []
        m=0
        l=0
        for i in range(0,n):
            if (i%2 == 0):
                temp.append(arrlarge[m])
                m+=1
            else:
                temp.append(arrsmall[l])
                l+=1
        for i in range(0,n):
            arr[i] = temp[i]
        return arr 
