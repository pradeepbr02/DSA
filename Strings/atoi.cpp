class Solution {
public:
    int myAtoi(string s) {
        vector<int>v={0,1,2,3,4,5,6,7,8,9};
        int i=0;
        while(i < s.size() && s[i]==' '){
            i++;
        }
        if(find(v.begin() , v.end() , s[i]-'0')==v.end() and s[i]!='+' and s[i]!='-' ){
            return 0;
        }

        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            sign=1;
            i++;
            }

        string temp="";
        while(i < s.size() and find(v.begin() , v.end() , s[i]-'0')!=v.end()){
            temp+=s[i];
            i++;
        } 

        int j=0;
        long long int res=0;

        while(j < temp.size()){
            res=res*10 + (temp[j]-'0');
            if(res > INT_MAX){
                break;
            }
            j++;
        }

        if(sign==-1){
            res=res*-1;
        }

        if(res > INT_MIN and res < INT_MAX){
            return res;
        }

        if(sign==-1){
            return INT_MIN;
        }
        return INT_MAX;
        
    }
};