#Problem link:https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
 
def kthSmallest(arr, N, K):
    arr.sort()
    return arr[K-1]

# Driver code
if __name__ == '__main__':
    arr = [12, 3, 5, 7, 19]
    N = len(arr)
    K = 2
 
    # Function call
    print("K'th smallest element is",
          kthSmallest(arr, N, K))