class Solution {
public:
    
    void solve(vector<int> nums , int i , vector<int>output , set<vector<int>> &ans){
        if(i>=nums.size()){
            if(output.size()>=2){
                ans.insert(output);
            }
            
            return ;
        }
        
        if(output.size()==0 or nums[i] >= output.back()){
            output.push_back(nums[i]);
            solve(nums , i+1 , output , ans);
            output.pop_back();
        }
        
        solve(nums , i+1 , output , ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>output;
        
        solve(nums , 0 , output , ans);
        
        return vector(ans.begin() , ans.end());
    }
};