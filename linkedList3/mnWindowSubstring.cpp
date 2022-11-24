class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()){
            return "";
        }
        if(t==s){
            return s;
        }
        unordered_map<char , int>tChars;
        int tLen=0;
        for(auto it : t){
            tChars[it]++;
            tLen++;
        }
        
        unordered_map<char , int>sChars;
        int i=0,j=0,minLen=INT_MAX;
        int sLen=0;
        string res="";
        while(j < s.size()){
            sChars[s[j]]++;
            
            if(sChars[s[j]] <= tChars[s[j]]){
                sLen++;
            }
            
            while(sLen==tLen){
                if(minLen > j-i+1){
                    res=s.substr(i , j-i+1);
                    minLen=res.size();
                }
                sChars[s[i]]--;
                if(sChars[s[i]] < tChars[s[i]]){
                   sLen--;
                }
                i++;
            }
            j++;
        }
        return res;
    }
};