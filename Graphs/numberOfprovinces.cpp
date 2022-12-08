
class Solution {
public:
    void dfs(vector<vector<int>>& M, int i, vector<int>& visited) {
        visited[i] = 1;
        for (int j = 0; j < M[0].size(); j++) {
            if (visited[j] == 0 && M[i][j] == 1) {
                dfs(M, j, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        int ans = 0;
        vector<int> visited(M.size(), 0);
        for (int i = 0; i < M.size(); i++) {
            if (visited[i] == 1)
                continue;
            dfs(M, i, visited);
            ans++;
        }
        return ans;
    }
};