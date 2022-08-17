#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>matrix;
        if(nums.empty()){
            return matrix;
}
        int n= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left = j+1;
                int right = n-1;
                int reqTarget = target - nums[j] - nums[i];
                while(left < right){
                    int sum = nums[left] + nums[right];
                    if(sum < reqTarget){
                        left++;
                    }
                    else if(sum > reqTarget){
                        right--;
                    }
                    else{
                        vector<int>v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[left];
                        v[3]=nums[right];
                        matrix.push_back(v);
                        
                        while(left < right && nums[left]==v[2]){
                            left++;
}
                        while(left < right && nums[right]==v[3]){
                            right--;
                        }
}
}
                while(j+1<n && nums[j+1] == nums[j]){
                    j++;
}
                
}
            while(i+1<n && nums[i+1] == nums[i]){
                i++;
            }
        }
        return matrix;
 
    }
};