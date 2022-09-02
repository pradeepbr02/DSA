class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int>mp;
        if(nums.size()==1){
            return nums[0];
}
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second==1){
                return it.first;
            }
}
        return 0;
    }
};