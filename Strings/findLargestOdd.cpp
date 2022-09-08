//Why we subtract-'0?
//Because, the literals are arranged in sequence. So if 0 was 48, 1 will be 49, 2 will be 50 etc.. in ASCII, then x would contain, ascii value of '9' minus the ascii value of '0' which means, ascii value of '9' would be 57 and hence, x would contain 57 - 48 = 9 

class Solution {
public:
    string largestOddNumber(string num) {
        
        int i=num.size()-1;;
        
        while(i>=0){
            if((num[i]-'0')%2!=0){
                return num.substr(0 , i+1);
            }
            i--;
        }
        return "";
    }
};