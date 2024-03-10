class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        int n=arr.size();
        vector<string>ans(n,"");
        unordered_map<int,unordered_set<string>>mp;
        for(int k=0;k<n;k++){
            int sz=arr[k].size();
            for(int i=0;i<sz;i++){
                for(int j=i;j<sz;j++){
                    string temp=arr[k].substr(i,j-i+1);
                    mp[k].insert(temp);
                }
            }
        }
        for(int k=0;k<n;k++){
            int minlen=INT_MAX; string minstring = "";
            for(auto temp:mp[k]){
                bool flag=true;
                for(int j=0;j<n;j++){
                    if(k==j){
                        continue;
                    }
                    if(mp[j].contains(temp)){
                        // cout<<"pramod"<<endl;
                            flag=false;
                            break;
                    }
                    
                }
                if(flag){
                    if(temp.size() < minlen){
                        minlen=temp.length();
                        minstring=temp;
                    }
                    else if(temp.size() == minlen && temp < minstring){
                        minstring=temp;
                    }
                }
            }
            // cout<<minstring<<endl;
           ans[k]=minstring;
        }
        return ans;
    }
};
