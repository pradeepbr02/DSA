class Solution {
public:
    static bool comparator(pair<string , int>&a , pair<string , int>&b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int>mp;
        for(auto it : words){
            mp[it]++;
        }
        vector<pair<string , int>>v;
        vector<string>s;
        for(auto it : mp){
            v.push_back(it);
        }
        sort(v.begin() , v.end() , comparator);
        for(int i=0;i<k;i++){
            s.push_back(v[i].first);
        }
        return s;
    }
};