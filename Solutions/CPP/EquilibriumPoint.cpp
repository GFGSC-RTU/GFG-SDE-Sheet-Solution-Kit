int r ,l,lsum = 0,rsum = 0;
        r = n-1;
        l = 0;
        while(l<=r){
            if (lsum >rsum)
                rsum+=a[r--];
            else if (lsum <rsum)
                lsum+=a[l++];
            else if (lsum == rsum && r-l==0)
                return ((r+l)/2)+1 ;
                
            else{
                lsum += a[l++];
                rsum += a[r--];
            }
                
        }
        return -1;
    }

};