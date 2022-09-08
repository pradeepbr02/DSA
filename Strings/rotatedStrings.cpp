class Solution {
public:
    bool rotateString(string s, string goal) {
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<s.size();i++){
            q1.push(s[i]);
            q2.push(goal[i]);
        }
        
        int size = q2.size()-1;
        while(size !=0){
            char ch = q1.front();
            q1.pop();
            q1.push(ch);
            if(q1==q2){
                return true;
            }
            size--;
        }
        return false;
    }
};