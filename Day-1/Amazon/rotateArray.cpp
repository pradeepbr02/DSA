class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int>q;
        int j=nums.size()-1;
        
        if(k>nums.size()){
            k=k%(nums.size());
        }
        int m=k;
        while(k>=1){
            q.push_front(nums[j]);
            k--;
            j--;
        }
        
        for(int i=0; i< nums.size()-m;i++){
            q.push_back(nums[i]);
        }
        nums.clear();
        for(auto it : q){
            nums.push_back(it);
        }
         
    }
    
};