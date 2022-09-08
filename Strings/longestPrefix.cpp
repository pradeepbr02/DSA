class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = INT_MAX;
        
        if(strs.size()==1){
            return strs[0];
        }
        
        for(int i=0;i<strs.size();i++){
            if(strs[i].length() < length){
                length = strs[i].length();
            }
        }
        
        int index=0;
        
        while(index < length){
            char a = strs[0][index];
            
           for(int i=0;i<strs.size();i++){
               if(strs[i][index]!=a){
                   return strs[0].substr(0 , index);
               }
           }
            index++;
        }
        return strs[0].substr(0 ,index);
    }
};