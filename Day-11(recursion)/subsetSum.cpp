class Solution
{
public:

void solve(int i ,int sum, vector<int>v , int N ,vector<int>&ans){
    if(i==N){
        ans.push_back(sum);
        return;
    }
    
    solve(i+1 , sum+v[i] ,v ,N, ans);
    
    solve(i+1 , sum , v, N, ans);
}

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum=0;
        int i=0;
        vector<int>ans;
        solve(i , sum , arr ,N , ans);
        sort(ans.begin() , ans.end());
        return ans;
    }
};