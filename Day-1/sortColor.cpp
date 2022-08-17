#include<bits/stdc++.h>
using namespace std;                      //use any efficient sorting algo
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int min = i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j] < nums[min]){
                    min=j;
}
                
            }
            swap(nums[min],nums[i]);
}
        
        
    }
};