class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int,int>mp;
        mp[0]=1;
        long long xsum=0;
        long long ans=0;
        for(int i=0;i<word.size();i++){
            int len=word[i]-'a';
            xsum=xsum^(1<<len);
                ans+=mp[xsum];
            for(char ch1='a';ch1<='j';ch1++){
                int shift=(ch1-'a');
                long long sum=(xsum^(1<<shift));
                    ans+=mp[sum];
            }
            mp[xsum]++;
        }
        return ans;
    }
};
