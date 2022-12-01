class Solution {
public:
unordered_map<string, bool> mp;

    

    bool isScramble(string s1, string s2){
        if(s1==s2){
            return true;   //Zero swaps
        }
        string key = s1 + " " + s2;

        int n=s1.length();

        if(mp.find(key)!=mp.end()){
            return mp[key];
        }

        for(int i=1;i<=n-1;i++){

             bool cond1 = (isScramble(s1.substr(0,i) , s2.substr(0,i)) and isScramble(s1.substr(i , n-i),s2.substr(i,n-i)));


            bool cond2 = (isScramble(s1.substr(0,i) , s2.substr(n-i ,i)) and isScramble(s1.substr(i , n-i),s2.substr(0,n-i)));

            if(cond1 || cond2){
                return true;
            }


        }
        return mp[key]=false;
    }
    
};