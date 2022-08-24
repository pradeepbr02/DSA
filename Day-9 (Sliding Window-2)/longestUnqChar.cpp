class Solution{
  public:
    int longestKSubstr(string s, int k) {

    unordered_map<char,int>mp;

    int j=0 ,i=0;

    int maxi = INT_MIN;

    while(j < s.size()){

        mp[s[j]]++;

        if(mp.size() < k){

            j++;
        }

        else if(mp.size()==k){

            maxi = max(maxi , j-i+1);

            j++;
        }
        else if(mp.size() > k){

            while(mp.size() > k){

            mp[s[i]]--;

            if(mp[s[i]]==0){

                mp.erase(s[i]);
            }

            i++;

        }
        j++;

        }
    }
    return maxi > 0 ? maxi : -1;
    
    }
};