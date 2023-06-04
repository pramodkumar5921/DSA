class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        long long ans=0;
        int m=q.size();
        int col=n,row=n;
        set<vector<int>>st;
        for(int i=m-1;i>=0;i--){
            int type=q[i][0];
            int idx=q[i][1];
            int val=q[i][2];
            
            if(type==1 and st.find({type,idx})==st.end()){
                st.insert({type,idx});
                ans+=(long long)row*val;
                col--;
            }
            else if(type==0 and st.find({type,idx})==st.end()){
                st.insert({type,idx});
                ans+=(long long)col*val;
                row--;
            }
        }
        return ans;
    }
};
