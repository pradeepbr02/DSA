#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>mySet;
        int len=0;
        for(auto it: nums){
            mySet.insert(it);
            }
        

        for(auto it : nums){
            
            
        if(!mySet.count(it -1)){
            int num =it;
            int maxLen = 1;
            
            while(mySet.count(num +1)){
                num+=1;
                maxLen+=1;
}
            len = max(len , maxLen);
}
            
            
          
                
}
        return len;
}
    
};