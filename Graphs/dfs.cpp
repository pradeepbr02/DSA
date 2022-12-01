class Solution {
  public:
  void solve(int node , vector<int> adj[] , int vis[] , vector<int> &dfs){
      vis[node]=1;
      dfs.push_back(node);
      
      for(auto it : adj[node]){
          if(!vis[it]){
              solve(it , adj  , vis , dfs);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>dfs;
        int vis[V]={0};
        
        solve(0 , adj , vis , dfs);
        
        return dfs;
        
    }
};


