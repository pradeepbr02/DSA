#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        int dup;
        for(auto it : mp){
            if(it.second > 1){
                dup = it.first;
                break;
}
        }
        return dup;
        
        
    }
};