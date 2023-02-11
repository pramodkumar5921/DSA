class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
      map< int,int>mp;
      for(int i=0;i<basket1.size();i++){
          mp[basket1[i]]++;
          mp[basket2[i]]--;
      } 
      vector<int>ans;
      for(auto it:mp){
          int freq=it.second;
          if(abs(freq)%2!=0){
             return -1;
          }
      
        for(int i=0;i<abs(freq)/2;i++){
          ans.push_back(it.first);
        }
      
      
    }
    int mini=(*mp.begin()).first;
    long long int res=0;
    for(int i=0;i<ans.size()/2;i++){
        res+=min(ans[i],2*mini);
    }
   
      return res;
    }
};
