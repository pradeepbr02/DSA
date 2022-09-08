class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char , char>mp;
        unordered_map<char , bool>mp2;
        
        for(int i=0;i<s.size();i++){
            if(!mp[s[i]]){
                if(!mp2[t[i]]){
                    mp[s[i]]=t[i];
                    mp2[t[i]]=true;
                }
                else{
                    return false;
                }
            }
            else{
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};