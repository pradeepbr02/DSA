class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int mini1 = INT_MAX;
		int mini2 = INT_MAX;
		int small = INT_MAX;
		for(int i=0;i<s.size();i++){
		    if(s[i]==word1){
		       mini1= i ;
		    }
		    if(s[i]==word2){
		        mini2 = i;
		    }
		    
		    if(mini1!=INT_MAX and mini2!=INT_MAX){
		        small = min(small , abs(mini1-mini2));
		    }
		}
		
		return small;

	}
};