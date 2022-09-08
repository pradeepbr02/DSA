class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string ans="";
        string word;
        int j=0;
        while(str >> word){
            if(j==0){
                ans=word+ans;
            }
            else{
                ans=word+" "+ans;
            }
            j++;
        }
      return ans;
    
    }
};