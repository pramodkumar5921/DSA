int lengthOfLongestSubstring(string s) {
    int i=0,j=0;
    unordered_map<char,int>mp;
    int ans=0;
    while(i<s.size()){
        mp[s[i]]++;
        if(mp.size()<=2){
            ans=max(ans,i-j+1);
        }
        else{
            while(j<i and mp.size()>2){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    mp.erase(s[j]);
                }
                j++;
            }
        }
        i++;
    }
    return ans;
}
