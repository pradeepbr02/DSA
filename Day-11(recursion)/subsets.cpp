class Solution {
    void solution(vector<int>nums , vector<int>output , int index, vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(output);
            return;
}
        
        output.push_back(nums[index]);
        solution(nums , output , index+1 , ans);
       output.pop_back();
        solution(nums , output , index+1 , ans);
        
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>res;
        int i=0;
        solution(nums , output , i,  res);
        return res;
        
    }
};