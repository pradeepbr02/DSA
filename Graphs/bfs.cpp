class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vis[0]=1;
        queue<int>que;
        que.push(0);
        vector<int>bfs;
        while(!que.empty()){
            int node = que.front();
            que.pop();
            
            for(auto it : adj[node]){
                if(!vis[it]){
                    que.push(it);
                    vis[it]=1;
                }

            }
            
            bfs.push_back(node);
        }
        
        
        
         return bfs;
        
 
 
    }
   
    
};