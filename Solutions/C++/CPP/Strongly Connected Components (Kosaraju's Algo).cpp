// https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    stack<int> st;
    vector<bool> vis;
    void dfs(vector<int> adj[],int u)
    {
        vis[u] = true;
        for(auto v : adj[u])
        {
            if(!vis[v])
            dfs(adj,v);
        }
        st.push(u);
    }
    void cdfs(vector<int> radj[],int u)
    {
        vis[u] = true;
        for(auto v : radj[u])
        {
            if(!vis[v])
            cdfs(radj,v);
        }
      
    }
    int kosaraju(int V, vector<int> adj[])
    {
        vis = vector<bool> (V,false);
        for(int i = 0;i<V;i++)
        {
            if(!vis[i])
            dfs(adj,i);
        }
        int res = 0;
        vector<int> radj[V];
        for(int i = 0;i<V;i++)
        {
            for(auto p : adj[i])
            radj[p].push_back(i);
        }
        vis = vector<bool> (V,false);
        while(!st.empty())
        {
            while(!st.empty() && vis[st.top()])
            st.pop();
            if(!st.empty()){
            cdfs(radj,st.top());
            st.pop();
            res++;
            }
            
            
        }
        return res;
    }
};
