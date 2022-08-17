#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n= nums.size();
        unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second > n/3){
                v.push_back(it.first);
}
}
        return v;
        
    }
};