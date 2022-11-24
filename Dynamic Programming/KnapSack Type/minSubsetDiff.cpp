class Solution{
    public:
    int minDifference(int arr[] , int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        bool dp[n+1][sum+1];

        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    dp[i][j]=false;
                }
                if(j==0){
                    dp[i][j]=true;
                }
            }
       }

       for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] or dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
       }

       int ans = INT_MAX;
       for(int i=0;i<sum+1;i++){
        if(dp[n][i]==true){
            ans=min(ans , abs(sum-2*i));
        }
       }

       return ans;
    }

};