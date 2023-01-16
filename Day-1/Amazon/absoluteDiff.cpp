class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        unordered_map<int, int>mp;
        for(int i=0 ;i<n;i++){
            mp[arr[i]%k]++;
        }
        long long count=0;
        for(auto it : mp){
            count+=it.second *(it.second-1)/2;
        }
        return count;
    }
};