class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string str2 =str;
		    int m=str.size();
		    int n=str2.size();
		    
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
		            if(str[i-1]==str2[j-1] and i!=j){
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else{
		                dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
		            }
		        }
		    }
		    return dp[m][n];
		}

};