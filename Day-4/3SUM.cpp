#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>matrix;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i==0 || (nums[i]!=nums[i-1])){
                int left =i+1;
                int right =n-1;
                int sum=0-nums[i];
                while(left < right){
                    if(nums[left]+nums[right]==sum){
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[left]);
                        v.push_back(nums[right]);
                        matrix.push_back(v);
                        while(left < right && nums[left]==nums[left+1])left++;
                        while(left < right && nums[right]==nums[right-1])right--;
                        left++;
                        right--;
                    }
                    else if(nums[left] + nums[right] < sum){
                        left++;
}
                    else{
                        right--;
                    }
                }
}
        }
        return matrix;
        
        
    }
};