class Solution {
public:
            void solve(vector<int>&nums , vector<int>&output , int i , int target,vector<vector<int>>&ans){
       
            if(target==0){
                ans.push_back(output);
                return;
            }
            

        for(int j =i ;j<nums.size();j++  ){
            if(j > i && nums[j]==nums[j-1])continue;
               

            if(nums[j] > target){
                break;
            }
         
            output.push_back(nums[j]);
            solve(nums , output , j+1 , target-nums[j] , ans);
            output.pop_back();
        }
    }


    vector<vector<int>> combinationSum2(vector<int>&nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(nums , output , i , target , ans);
        return ans;
        
    }
};