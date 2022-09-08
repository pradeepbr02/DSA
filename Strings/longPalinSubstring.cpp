class Solution {
public:
    string longestPalindrome(string s) {
        int start;
        int end;
        int max_length=0;
        int start_index;

        for(int i=1 ; i<s.size();i++){
            start=i-1;
            end=i+1;

            while(start>=0 and end<s.size() and s[start]==s[end]){  //this loop is for checking odd strings
                  if(max_length < end-start+1){
                    max_length=end-start+1;
                    start_index=start;

                  }
                  start--;
                  end++;

            } 

            start=i-1;  //this is for checking even strings
            end=i;

            while(start>=0 and end < s.size() and s[start]==s[end] ){
                if(max_length < end-start+1){
                    max_length=end-start+1;
                    start_index=start;
                }
                start--;
                end++;
            }

          }

            string ans = "";

            if(max_length==0){
                ans+=s[0];
                return ans;
            }

            for(int i=start_index; i< start_index+max_length ; i++){
                ans+=s[i];
            }
            
            return ans;
    }
};