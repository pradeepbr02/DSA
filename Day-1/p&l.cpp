#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini = nums[0],profit=0;
        for(int i=1;i<nums.size();i++){
            profit = max(profit , nums[i]-mini);
            mini = min(nums[i] , mini);
        }
        return profit;

    }
};