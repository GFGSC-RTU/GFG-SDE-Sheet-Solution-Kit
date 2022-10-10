//Problem Link->https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?page=5&curated[]=1&sortBy=submissions

long long toh(int n, int from, int to, int aux) {
        
        if(n==1){
            cout<<"move disk "<<n<<" "<<"from rod "<<from<<" "<<"to rod "<<to<<endl;
            return n;
        }
       
        long long ans=toh(n-1,from,aux,to);
        ans++;
         cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        ans+=toh(n-1,aux,to,from);
         
        return ans;
    }
