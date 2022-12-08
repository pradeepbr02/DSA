class Solution {
public:
int dp[501][501];
int helper(int i , int j , vector<int>&piles){
    if(i > j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    return dp[i][j]= max(piles[i] - helper(i+1 , j , piles) , piles[j]-helper(i , j-1 , piles));
}
    bool stoneGame(vector<int>& piles) {

        int n=piles.size();
        memset(dp , -1 , sizeof(dp));
        return helper(0 , n-1 , piles);
    }
};