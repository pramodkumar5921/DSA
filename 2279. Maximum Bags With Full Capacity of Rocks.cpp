class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        vector<int>v;
        for(int i=0;i<c.size();i++){
            v.push_back(c[i]-r[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(a==0){
                break;
            }
            if(v[i]==0){
                continue;
            }
            if(v[i]<=a){
                a-=v[i];
                v[i]=0;
            }
            else{
                break;
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0)
            ans++;
        }
        return ans;
    }
};
