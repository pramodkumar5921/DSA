class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
       vector<int>ans;
       for(int i=0;i<colors.size();i++){
        ans.push_back(colors[i]);
       }
       for(int i=0;i<k-1;i++){
        ans.push_back(colors[i]);
       }
       int res=0;
       int cnt=1;
       for(int i=1;i<ans.size();i++){
        if(ans[i]!=ans[i-1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>=k){
            res++;
        }
       }
       return res;
    }
};
