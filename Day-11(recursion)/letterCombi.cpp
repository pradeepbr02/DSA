class Solution {
public:
    vector<string>ans;
    void solve(string &digits , map<int ,string>&mp , string s , int i){
        if(s.size()==digits.size()){
            ans.push_back(s);
            return;
        }
        int size = digits[i]-'0';
        
        for(int j=0 ; j<mp[size].size();j++){
            s+=mp[size][j];
            solve(digits , mp  , s , i+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int i=0;
        
        map<int,string>mp;
        mp.insert({2 , "abc"});
        mp.insert({3 , "def"});
        mp.insert({4 , "ghi"});
        mp.insert({5 , "jkl"});
        mp.insert({6 , "mno"});
        mp.insert({7 , "pqrs"});
        mp.insert({8 , "tuv"});
        mp.insert({9 , "wxyz"});
        if(digits.size()==0){
            return ans;
        }
        solve(digits , mp , "" , 0);
        return ans;
    }
};
