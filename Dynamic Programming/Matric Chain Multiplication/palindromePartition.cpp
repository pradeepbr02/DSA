class Solution{
public:
int dp[501][501];

bool isPalindrome(string &str , int i , int j){
 
    while(i < j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int solve(string &str , int i , int j){
    if(i >= j){
        return 0;
    }
    if(isPalindrome(str , i , j)){
        return 0;
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int res = INT_MAX;
    for(int k=i;k<j;k++){
       int temp = solve(str , i , k) + solve(str , k+1 , j)+1;
        
        
        
        res = min(res , temp);
    }
    return dp[i][j]=res;
}
    int palindromicPartition(string str)
    {
        // code here
        
        memset(dp , -1 , sizeof(dp));
        
        return solve(str , 0 , str.size()-1);
    }
};

//aleternate solution---optimized

class Solution {
public:
    int dp[2001][2001];
    bool isPal(string &s,int i,int j){
        if(i>=j)return true;
        while(i<j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    int solve(string &s,int i,int j){
        if(i>=j || isPal(s,i,j))return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            if(isPal(s,i,k)){
                ans=min(ans,1+solve(s,k+1,j));
            }
        }
        return dp[i][j]=ans;
    }
    int minCut(string s) {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(s,0,n-1);
    }
};