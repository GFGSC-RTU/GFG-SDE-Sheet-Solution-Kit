//Problem Link-https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1


class Solution{
public:
bool issafe(int col,int row,vector<vector<int>>&a){
    int n=a.size();
    int x=col;
    int y=row;
    while(row>=0 && col>=0){
        if(a[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=y;
    col=x;
    while(row>=0 && col>=0){
        if(a[row][col]==1){
            return false;
        }
        col--;
    }
    row=y;
    col=x;
    
    while(row>=0 && col>=0 && row<n){
        if(a[row][col]==1){
            return false;
        }
        row++;
        col--;
    }
    return true;
    
}
void solve(int col,vector<vector<int>>&a,vector<int>&v,vector<vector<int>>&ans,int n){
    if(col==n){
        for(int t=0;t<n;t++){
            for(int u=0;u<n;u++){
                if(a[u][t]==1){
                    v.push_back(u+1);
                }
            }
        }
        ans.push_back(v);
        v.clear();
        return;
    }
    for(int i=0;i<n;i++){
        if(issafe(col,i,a)){
            a[i][col]=1;
            // v.push_back(i);
            solve(col+1,a,v,ans,n);
            a[i][col]=0;
            // v.pop_back();
        }
    }
}
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<vector<int>>a;
        vector<int>p(n,0);
        for(int i=0;i<n;i++){
                a.push_back(p);
        }
        vector<int>v;
        solve(0,a,v,ans,n);
        return ans;
    }
};
