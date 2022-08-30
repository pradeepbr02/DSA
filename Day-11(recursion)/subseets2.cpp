class Solution {
public:

    void solution(vector<int>nums , vector<int>output , int index, vector<vector<int>>&ans){

        if(index==nums.size()){
                 
		ans.push_back(output);
			
            return;
        }
        
        output.push_back(nums[index]);

        solution(nums , output , index+1 , ans); // pick the element to consider in subset

        output.pop_back(); //remove it to not consider in the next call;
        
        while(index+1 < nums.size() && nums[index]==nums[index+1]){

            index++;   //move the index till you dont find two adajcent elements same
}
        solution(nums , output ,index+1 , ans);  //call again with not considering the index
     
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>output;

        vector<vector<int>>ans;

        sort(nums.begin() , nums.end());  //sort the vector first so we can find same elements adjacent to each other

        int i=0;

        solution(nums , output , i , ans);
        
        return ans;
      
      
        
    }
};