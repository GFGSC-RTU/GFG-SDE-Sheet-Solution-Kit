//problem link-https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/


{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        // code here 
        vector<int>a;
        int t=0;
        int l=0;
        int ri=c-1;
        int b=r-1;
        
        int d=0;
        while(t<=b && l<=ri){
            if(d==0){
                for(int i=l;i<=ri;i++){
                    a.push_back(m[t][i]);
                }
                t++;
            }
            else if(d==1){
                for(int i=t;i<=b;i++){
                    a.push_back(m[i][ri]);
                    
                }
                ri--;
            }
            else if(d==2){
                for(int i=ri;i>=l;i--){
                    a.push_back(m[b][i]);
                }
                b--;
            }
            else{
                for(int i=b;i>=t;i--){
                    a.push_back(m[i][l]);
                }
                l++;
            }
            d=(d+1)%4;
        }
        
        
        
        
        
        return a;
    }
};
