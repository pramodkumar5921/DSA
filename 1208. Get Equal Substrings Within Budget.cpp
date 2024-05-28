class Solution {
public:
   unordered_map<char,int>mp;
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>temp;
        for(int i=0;i<=26;i++){
            mp[i+'a']=i;
        }
        for(int i=0;i<s.size();i++){
            temp.push_back(abs(mp[s[i]]-mp[t[i]]));
        }
        int j=0,i=0;
        int res=0,ans=0;
        // for(int i=0;i<temp.size();i++){
        //     cout<<temp[i]<<" ";
        // }

        while(i<temp.size()){
            res+=temp[i];
            if(res>maxCost){
                ans=max(ans,i-j);
                while(j<i and res>maxCost){
                    res-=temp[j];
                    j++;
                }
            }
            i++;
        }
        int mini=*min_element(temp.begin(),temp.end());
        if(maxCost<mini){
            return 0;
        }
        return max(ans,i-j);
    }
};
