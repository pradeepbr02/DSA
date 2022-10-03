class solution{
    public: int mod = 1e9 + 7;

    long long power(long long a , long long b){

        long long ans;

        if(b==0){
            return 1;
        }
        ans=power(a , b/2);
        ans=ans*ans;
        ans = ans%mod;
        if(b % 2){
            ans=ans*ans*a;
        }
        ans=ans%mod;

        return ans;

    }

    int countGoodNumbers(long long n){
        if(n%2){
            return power(5 , (n+1)/2)*power(4 , n/2)%mod;
        }
        
        return power(5 , n/2)*power(4 , n/2)%mod;
    }

};