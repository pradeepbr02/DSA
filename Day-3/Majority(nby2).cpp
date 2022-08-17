#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
}
        int grt;
        
        for(auto it:m){
            if(it.second > nums.size()/2){
                grt = it.first;
                break;
}
}
        return grt;

            
}
  
};