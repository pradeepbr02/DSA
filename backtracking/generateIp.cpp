class Solution {
public:
void getIp(int index ,vector<string>&temp , vector<string>&ans , string &s ){
    if(index==s.length() and temp.size()==4){
        string valid = temp[0]+'.'+temp[1] +'.'+temp[2] +'.'+temp[3];
        ans.push_back(valid);
        return;
    }


    string str="";

    for(int i=index ;i<s.length() and temp.size()<4 ;i++){

        if(s[i] -'0' >9){
            continue;
        }
        str+=s[i];
        int strint = stoi(str);

        if(strint >= 0 and strint <= 255){
            temp.push_back(str);
            getIp(i+1 , temp , ans , s);
            temp.pop_back();
        }
        if(strint <= 0 or strint >255){
            break;
        }
    }
}
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        vector<string>temp;
         getIp(0 , temp , ans, s);

         return ans;
    }
};