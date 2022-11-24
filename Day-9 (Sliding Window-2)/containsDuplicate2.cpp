class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int j=0;
            unordered_map<int,int>mp;
        while(j < nums.size()){
            mp[nums[j]]++;
            if(mp[nums[j]] > 1){
                return true;
            }
            if(j-i==k){
                mp[nums[i]]--;
                i++;
            }
           j++;
        }
        return false;
    }
};