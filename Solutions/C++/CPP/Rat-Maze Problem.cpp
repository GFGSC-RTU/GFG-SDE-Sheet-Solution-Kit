#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Ratmazesolution{
    private:
    bool issafe(int x,int y,int b,vector<vector<int>> visit,vector<vector<int>> &a){
        if((x>=0 && x<b) && (y>=0 && y<b) && visit[x][y]==1 && a[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
        void solve(vector<vector<int>> &a,int b,vector<string> path,int x,int y,vector<vector<int>> visit,string ans){
            if(x==b-1 && y==b-1){
                path.push_back(ans);
                return;
            }
            visit[x][y]=1;
            //Down
            int newx=x+1;
            int newy=y;
            if(issafe(newx,newy,b,visit,a)){
                ans.push_back('D');
                solve(a,b,path,newx,newy,visit,ans);
                ans.pop_back();
            }
            //left
             newx=x;
             newy=y-1;
            if(issafe(newx,newy,b,visit,a)){
                ans.push_back('L');
                solve(a,b,path,newx,newy,visit,ans);
                ans.pop_back();
            }
            //Right
             newx=x;
             newy=y+1;
            if(issafe(newx,newy,b,visit,a)){
                ans.push_back('R');
                solve(a,b,path,newx,newy,visit,ans);
                ans.pop_back();
            }
            //Up
             newx=x-1;
             newy=y;
            if(issafe(newx,newy,b,visit,a)){
                ans.push_back('U');
                solve(a,b,path,newx,newy,visit,ans);
                ans.pop_back();
            }
            visit[x][y]=0;
        }
    public:
        vector<string> findpath(vector<vector<int>> &a,int b){
            vector<string> path;
            if(a[0][0]==0){
                return path;
            }
            int x=0;
            int y=0;
            vector<vector<int>> visit=a;
            for(int i=0; i<b; i++){
                for(int j=0; j<b; j++){
                    visit[i][j]=0;
                }
            }

            string ans="";
            solve(a,b,path,x,y,visit,ans);
            sort(path.begin(),path.end());
            return path;
        }
};
