class Solution {
    
    bool dfs(int u, vector<vector<int>>& adj, vector<int>& res, vector<int>& visited)
    {
        visited[u]=1;
        for(int v : adj[u])
        {
            if(visited[v]==1) return true;
            if(visited[v]==0 && dfs(v,adj,res,visited))
                return true;
        }
        visited[u]=2;
        res.push_back(u);
        return false;        
        
    }
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int> res;
        vector<vector<int>> adj(n);
        for(vector<int> c:pre)
            adj[c[1]].push_back(c[0]);
        
        vector<int> visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0 && dfs(i,adj,res,visited)) return {};
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
