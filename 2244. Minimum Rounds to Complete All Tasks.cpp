class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second<2){
                return -1;
            }
            else{
                while(it.second>=2){
                      if(it.second%3==0){
                    //    int rem3=it.second%3;
                       cnt++;
                       it.second=it.second-3;
                   }
                   else  if(it.second%2==0){
                   
                       cnt++;
                       it.second=it.second-2;
                  
                   }
                
                   else{
                    //    int r3=it.second%3;
                       cnt++;
                       it.second=it.second-3;
                   }
                }
            }
        }
        for(auto it:mp){
            cout<<it.second<<" ";
        }
        return cnt;
    }
};
