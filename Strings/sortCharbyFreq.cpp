class Solution {
public:
   static bool comparator(pair<char , int>a , pair<char , int>b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char , int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        vector<pair<char , int>>v;
        
        for(auto it : mp){
            v.push_back(it);
        }
        sort(v.begin() , v.end() , comparator);
        string res="";
        
        for(auto it : v){
            int temp = it.second;
            while(temp--){
                res+=it.first;
            }
        }
        
        return res;
        
       
    }
};