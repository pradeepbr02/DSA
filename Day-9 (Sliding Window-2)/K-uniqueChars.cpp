class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s == "" ){

            return 0;
        }
       unordered_map<char,int>mp;

        int j=0,i=0;

        int maxi =INT_MIN;

        while(j < s.size()){

            mp[s[j]]++;

            if(mp.size() == j-i+1){

                maxi = max(maxi , j-i+1);

                j++;
            }
            else if(mp.size() < j-i+1){

                while(mp.size() < j-i+1){

                    mp[s[i]]--;

                    if(mp[s[i]]==0){

                        mp.erase(s[i]);
                        
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
           
        

    }
};