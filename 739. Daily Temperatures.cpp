class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        int n=temp.size();
        vector<int>res(n,0);
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                res[i]=0;
                st.push({temp[i],i});
            }
            else{
                while(st.size()>0){
                    pair<int,int>tem=st.top();
                    int fir=tem.first;
                    int sec=tem.second;
                    if(fir>temp[i]){
                        res[i]=sec-i;
                        break;
                    }
                    else{
                        st.pop();
                    }
                }
                st.push({temp[i],i});
            }
        }
        return res;
    }
};
