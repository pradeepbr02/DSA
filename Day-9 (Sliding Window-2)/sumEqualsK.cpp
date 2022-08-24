<<<<<<< HEAD
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        int sum=0;
        mp[sum]=1;
        int ans=0;
        for(auto it : nums){
            sum+=it;
            int calc = sum - k;
            if(mp.find(calc)!=mp.end()){
                ans+=mp[calc];
            }
            mp[sum]++;
}
        return ans;
        
    }
=======
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        int sum=0;
        mp[sum]=1;
        int ans=0;
        for(auto it : nums){
            sum+=it;
            int calc = sum - k;
            if(mp.find(calc)!=mp.end()){
                ans+=mp[calc];
            }
            mp[sum]++;
}
        return ans;
        
    }
>>>>>>> 43152ea9a5bf6bf841617ed22985d5a20c16c83a
};