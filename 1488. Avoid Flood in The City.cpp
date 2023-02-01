class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
       unordered_map<int,int>mp;
       set<int>st;
       int n=rains.size();
       vector<int>ans(n,2);
       for(int i=0;i<n;i++){
           if(rains[i]==0){
               st.insert(i);
           }
           else{
               if(mp.find(rains[i])!=mp.end()){
                   auto a=st.upper_bound(mp[rains[i]]);
                   if(a!=st.end()){
                       ans[*a]=rains[i];
                       st.erase(a);
                   }
                   
                   else{
                       vector<int>v;
                       return v;
                   }
               }
              ans[i]=-1;
              mp[rains[i]]=i; 
           }
       }
       return ans; 
    }
};
