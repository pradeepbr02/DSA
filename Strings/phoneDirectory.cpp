class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        map<string , vector<string>>mp;
         sort(contact , contact+n);
        for(int i=0;i<s.size();i++){
            string cmp = s.substr(0 ,i+1);
            for(int j=0;j<n;j++){
                if(cmp==contact[j].substr(0 , i+1)){
                  if(find(mp[cmp].begin(),mp[cmp].end(), contact[j]) == mp[cmp].end()){
                    mp[cmp].push_back(contact[j]);
                }
                }
            }
                
                if(mp[cmp].size()==0){
                    mp[cmp].push_back("0");
                }
            
        }
        
        vector<vector<string>>v;
        for(auto it : mp){
            v.push_back(it.second);
        }
        
        return v;
        
    }
};