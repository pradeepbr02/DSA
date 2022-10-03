class Solution {
public:
void solve(int n , int i , int j , string s , vector<string>&ans){
    if(i > n){
        return;
    }

    if(i==n and j==n){
        ans.push_back(s);
        return ;
    }
    solve(n , i+1 , j , s , ans);
    
    if(i > j){
        solve(n , i , j+1 , s , ans);
    }

}
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        solve(n , 0 , 0 , s  , ans);
        return ans;
    }
};