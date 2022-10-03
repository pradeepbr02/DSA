class Solution {
public:

    void solution(vector<int>nums , vector<int>output , int index, vector<vector<int>>&ans){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }
        output.push_back(nums[i]);

        solution(nums , output , index+1 , ans);

        output.pop_back();

        while(index+1 and nums[index]==nums[index+1]){
            index++;
        }

        solution(nums, output , index+1 , ans);

  
     
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      int i=0;
      vector<vector<int>>ans;
      vector<int>output;
      sort(nums.begin() , nums.end());
      solution(nums, output , i , ans);
      return ans;
      
      
        
    }
};