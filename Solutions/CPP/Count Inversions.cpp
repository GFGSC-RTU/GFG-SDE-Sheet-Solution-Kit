long long int merge(long long a[], long long s, long long mid, long long end){
        
        long long int ans = 0;
        
        vector<long long> temp(end - s + 1);
        long long k = 0, i, j;
        
        for(i=s, j=mid+1; i<=mid && j<=end; ){
            if(a[i] <= a[j]){
                temp[k++] = a[i];
                i++;
            }else{
                temp[k++] = a[j];
                ans += (mid - i + 1);
                j++;
            }
        }
        
        while(i <= mid)
            temp[k++] = a[i++];
        while(j <= end)
            temp[k++] = a[j++];
        
        for(long long x=0; x<temp.size(); x++)
            a[s + x] = temp[x];
        
        return ans;        
    }
    
    long long int mergesort(long long arr[], long long s, long long e){
        if(s >=e)
            return 0;
        
        long long mid = s + (e - s) / 2;
        
        return mergesort(arr, s, mid) + mergesort(arr, mid + 1, e) + merge(arr, s, mid, e);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr, 0, N-1);