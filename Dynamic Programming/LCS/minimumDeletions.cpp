class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        string S2 =S;
        reverse(S.begin() , S.end());
      
        int m=S.size();
        int n = S2.size();
        
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
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        int res = m-dp[m][n];
        
        return res;
    } 
};