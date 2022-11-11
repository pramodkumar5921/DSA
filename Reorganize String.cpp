 class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        // string ans;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans;
        priority_queue<pair<int,char>>pq;
        for(auto x:mp){
            pq.push(make_pair(x.second,x.first));
        }
        pair<int,char>p2;
        while(pq.top().first>0){
            pair<int,char>p1=pq.top();pq.pop();
            ans.push_back(p1.second);
            p1.first--;
            // pair<int,char>p2;
            if(pq.size()>0){
           p2= pq.top();pq.pop();
            }
           
            if(p2.first>0){
                 ans.push_back(p2.second);
                 p2.first--;
            }
            pq.push(p1);
            pq.push(p2);
            // for(int i=1;i<=ans.size();i++){
            //     if(ans[i-1]==ans[i]){
            //         return "";
            //     }
            // }
        }
         for(int i=1;i<ans.size();i++){
                if(ans[i-1]==ans[i]){
                    return "";
                }
            }
        return ans;
    }
};
