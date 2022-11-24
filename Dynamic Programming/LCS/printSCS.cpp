class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {

        int m=str1.size();
        int n = str2.size();

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
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        int i=m;
        int j=n;
        string ans="";

        while(i >0 and j>0){
            if(str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
                i--;
                j--;

            }
            else if(dp[i-1][j] > dp[i][j-1]){
                ans+=str1[i-1];
                i--;
            }
            else{
                ans+=str2[j-1];
                j--;
            }
        }

        while(i > 0){
            ans+=str1[i-1];
            i--;

        }

        while(j > 0){
            ans+=str2[j-1];
            j--;
        }

        reverse(ans.begin() , ans.end());

        return ans;
    }
};