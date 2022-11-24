class Solution {
public:
    int minInsertions(string s) {
        string str=s;
        reverse(s.begin() ,s.end());

        int m=s.size();
        int n=str.size();

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
                if(s[i-1]==str[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        int res=m-dp[m][n];

        return res;
    }
};