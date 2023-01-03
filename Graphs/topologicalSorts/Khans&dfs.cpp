//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
// 	void findTopo(int node , vector<int> &vis , stack<int>&st , vector<int>adj[]){
// 	    vis[node]=1;
// 	    for(auto it : adj[node]){
// 	        if(!vis[it]){
// 	            findTopo(it , vis , st , adj);
// 	        }
// 	    }
// 	    st.push(node);
// 	}

// vector<int>toposort(int V , vector<int>adj[]){
     // code here
	   // stack<int>st;
	   // vector<int>vis(V , 0);
	   // for(int i=0;i<V;i++){
	   //     if(!vis[i]){
	   //         findTopo( i , vis , st , adj);
	   //     }
	   // }
	   // vector<int>topo;
	   // while(!st.empty()){
	   //     topo.push_back(st.top());
	   //     st.pop();
	   // }
	   // return topo;
	   
// }
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	  
	   int indeg[V]={0};
	   for(int i=0;i<V;i++){
	       for(auto it : adj[i]){
	           indeg[it]++;
	       }
	   }
	   queue<int>que;
	   for(int i=0;i<V;i++){
	       if(indeg[i]==0){
	           que.push(i);
	       }
	   }
	   vector<int>bfs;
	   while(!que.empty()){
	       int node = que.front();
	       que.pop();
	       bfs.push_back(node);
	       for(auto it : adj[node]){
	           indeg[it]--;
	           if(indeg[it]==0){
	               que.push(it);
	           }
	       }
	       
	   }
	   return bfs;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends