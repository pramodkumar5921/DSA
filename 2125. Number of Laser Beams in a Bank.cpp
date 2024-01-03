class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int m=bank[0].size();
         vector<int>alpha;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                    cnt++;
                }
            }
            if(cnt!=0){
            alpha.push_back(cnt);
            }
        }
        int ans=0;
        for(int i=1;i<alpha.size();i++){
            ans=ans+(alpha[i])*(alpha[i-1]);
        }
        return ans;
    }
};
