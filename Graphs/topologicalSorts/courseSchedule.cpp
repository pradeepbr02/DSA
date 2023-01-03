//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    vector<int>adj[N];
	    for(auto it : pre){
	        adj[it.first].push_back(it.second);
	    }
	    
	    int indeg[N]={0};
	    
	    for(int i=0;i<N;i++){
	        for(auto it : adj[i]){
	            indeg[it]++;
	        }
	    }
	    
	    queue<int>que;
	    for(int i=0;i<N;i++){
	        if(indeg[i]==0){
	            que.push(i);
	        }
	    }
	    int count=0;
	    
	    while(!que.empty()){
	        int node = que.front();
	        que.pop();
	        count++;
	        for(auto it : adj[node]){
	            indeg[it]--;
	            if(indeg[it]==0){
	                que.push(it);
	            }
	        }
	    }
	    if(count==N){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends