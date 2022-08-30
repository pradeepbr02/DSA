class Solution {
public:
    void solve(vector<int>nums , vector<int>output , int i , int target , vector<vector<int>>&ans){
        if(i==nums.size()){
            if(target==0){
            ans.push_back(output);
            }
            return;
        }
        if(nums[i]<=target){
        output.push_back(nums[i]);
        solve(nums , output , i , target-nums[i] , ans);
        output.pop_back();
        }
        
        solve(nums , output , i+1 , target , ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(nums , output , i , target , ans);
        return ans;
    }
};