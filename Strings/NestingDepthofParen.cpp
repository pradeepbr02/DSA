class Solution {
public:
    int maxDepth(string s) {
        
        queue<int>q;
        int maxi=0 , paren=0;
        for(auto it : s){
            if(it == '('){
                q.push(it);
                paren++;
                maxi=max(maxi , paren);
                
            }
            else if(it==')'){
                q.pop();
                paren--;
                
            }
        }
        return maxi;
    }
};