class Solution {
public:
    bool check(string s,string p,vector<int>&rem,int mid){
        for(int i=0;i<=mid;i++){
            s[rem[i]]='#';
        }
        int t=0;
        for(int i=0;i<s.size();){
            if(s[i]==p[t]){
                i++;
                t++;
            }
            else{
                i++;
            }
        }
        if(t==p.size()){
            return true;
        }
        return false;
    }
    int maximumRemovals(string s, string p, vector<int>& rem) {
        int st=0;
        int ans=0;
        int e=rem.size()-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            if(check(s,p,rem,mid)){
                ans=mid+1;
                st=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;

    }
};
