class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        if(x==0 or y==0){
            return 0;
        }
        
        
        if(s1[x-1] == s2[y-1]){
            return 1+lcs(x-1,y-1 , s1,s2);
        }
        
        return  max(lcs(x-1 , y , s1 , s2) ,lcs(x,y-1,s1,s2));
        
    }
};

//memoization

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int helper(int m ,int n , string &s1 , string &s2 , vector<vector<int>>&dp){
        if(m==0 or n==0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(s1[m-1]==s2[n-1]){
            return dp[m][n]=1+helper(m-1 , n-1 , s1 , s2 , dp);
        }
        else{
            return dp[m][n] = max(helper(m ,n-1 ,s1 , s2 , dp) , helper(m-1 , n , s1 , s2 , dp));
        }
        
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
       vector<vector<int>>dp(x+1 ,vector<int>(y+1 ,-1));
     
        return helper(x , y ,s1 , s2 , dp );
    }
};


//top down approach

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int dp[x+1][y+1];
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                if(i==0 or j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        
        return dp[x][y];
    }
};