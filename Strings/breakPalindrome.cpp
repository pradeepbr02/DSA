//Solution1

class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1){
            return "";
        }
        for(int i=0;i<palindrome.size()/2 ;i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        if(palindrome[palindrome.size()-1]=='b'){
            palindrome[palindrome.size()-1]='a';
            
        }
         else if(palindrome[palindrome.size()-1]=='a'){
            palindrome[palindrome.size()-1]='b';
            
        }
        return palindrome;
    }
};


//solution 2

class Solution {
public:

string breakPalindrome(string p) {
    int n = p.length();
    if(n==1)return "";
    if(n%2==0){
        for(int i=0;i<n/2 ;i++){
            if(p[i]!='a'){
                p[i] = 'a' ;
                return p;
            }
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            if(p[i]!='a'){
                p[i] = 'a' ;
                return p;
            }
        }
    }
    char res = p[n-1];
    res++;
    p[n-1] = res;
    return p;
}
};