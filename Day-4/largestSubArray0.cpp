#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {
        unordered_map<int,int>mp;
        int sum=0;
        int  maxi=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()){
                   
                    maxi=max(maxi , i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
        }
        return maxi;
    
        
    }
};