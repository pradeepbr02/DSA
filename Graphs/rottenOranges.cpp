//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<pair<int , int> ,int>>q;
        
        
        
        int n=grid.size();
        int m = grid[0].size();
       vector<vector<int>>vis(n , vector<int>(m ,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i , j} , 0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        
        int row[] ={-1 ,0 ,1,0};
        int col[] ={0 ,1 ,0 ,-1};
        int tm=0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm=max(tm , t);
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = r+row[i];
                int ncol = c+col[i];
                
                if(nrow >=0 and nrow < n  and ncol >=0 and ncol < m and grid[nrow][ncol]==1 and vis[nrow][ncol]!=2){
                    q.push({{nrow , ncol} , t+1});
                    vis[nrow][ncol]=2;
                    
                }
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and vis[i][j]!=2){
                    return -1;
                }
            }
        }
        
        return tm;
    }
};

 

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends