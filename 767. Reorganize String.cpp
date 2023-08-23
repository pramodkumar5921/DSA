class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string temp;
        while(pq.size()>0){
            int n=pq.top().first;
            char ch=pq.top().second;
            for(int i=0;i<n;i++){
                temp+=ch;
            }
            pq.pop();
        }
        int n,m=0;
        if(s.size()%2!=0){
            n=s.size()/2+1;
            m=s.size()-n;
        }
        else{
            n=s.size()/2;
            m=s.size()-n;
        }
        int cnt=0;
        string ans=s;
        int i;
        for(i=0;i<n;i++){
            ans[cnt+i]=temp[i];
            cnt++;
        }
        cnt=1;i=n;
        for(int j=0;j<m;j++){
            ans[cnt+j]=temp[i];
            cnt++;
            i++;
        }
        bool flag=true;
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]==ans[i]){
                flag= false;
                break;
            }
        }
        if(flag==false){
            return "";
        }
        return ans;
    }
};
