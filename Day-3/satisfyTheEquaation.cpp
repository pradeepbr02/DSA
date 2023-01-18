class Solution {
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        map<pair<int,int> , int>mp;
        
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int sum = A[i]+A[j];
                mp[{i ,j}]=sum;
            }
        }
        vector<int>res;
        for(auto i : mp){
            for(auto j:mp){
                if(i.second ==j.second and i.first.first != j.first.first and i.first.second !=j.first.second and i.first.second!=j.first.first){
                    res.push_back(i.first.first);
                    res.push_back(i.first.second);
                    res.push_back(j.first.first);
                    res.push_back(j.first.second);
                    return res;
                }
            }
        }
        
        return {-1,-1,-1,-1};
    }