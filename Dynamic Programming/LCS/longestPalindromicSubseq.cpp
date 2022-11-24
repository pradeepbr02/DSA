class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
             string S = A;
             reverse(A.begin() , A.end());
             string S2=A;
        
        int m = S.length();
        int n = S2.length();
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 or j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]==S2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                   dp[i][j]= max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};