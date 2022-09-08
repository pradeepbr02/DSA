class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto it : nums1){
            ans.push_back(it);
        }
        for(auto it : nums2){
            ans.push_back(it);
        }
        sort(ans.begin() , ans.end());
        
        int n = ans.size();
        int start = 0 , end=ans.size()-1;
        if(n%2!=0){
            int mid = (end - start)/2;
            double res = double(ans[mid]);
            return res;
        }
        int mid = (end - start)/2;
        int sum=0;
        sum = ans[mid] + ans[mid+1];
        return (double) sum/2;
    }
};