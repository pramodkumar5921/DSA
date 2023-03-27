long long power(long long a,long long b){
        long long ans=1;
        long long rem=1e9+7;
        while(b>0){
            if(b&1!=0){
                ans=(ans*(a%rem))%rem;
            }
            a=((a%rem)*(a%rem))%rem;
            b=b>>1;
        }
        return ans;
    }
