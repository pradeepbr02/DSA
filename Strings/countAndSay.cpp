class Solution {
public:
    string helper(string s , int n){
        if(n==0){
            return s;
        }
        string res="";
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
            count++;
            }
            else{
                res+=to_string(count);
                res+=s[i-1];
                count=1;
            }
        }
        res+=to_string(count);
        res+=s[s.size()-1];
        return helper(res , n-1);
    }
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        return helper("1" , n-1);
        
    }
};