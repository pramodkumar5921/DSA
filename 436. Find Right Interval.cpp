class Solution {
public:
    int solve(vector<vector<int>>&first,vector<int>&first1,int no){
        int it=-1;
        it=lower_bound(first1.begin(),first1.end(),no)-first1.begin();
        if(it>=first1.size()){
            return -1;
        }
        return first[it][1];
        
    }
    vector<int> findRightInterval(vector<vector<int>>& inter) {
        vector<vector<int>>first;
        vector<int>second;
        for(int i=0;i<inter.size();i++){
            vector<int>temp;
            temp.push_back(inter[i][0]);
            temp.push_back(i);
            first.push_back(temp);
            second.push_back(inter[i][1]);
        }
        sort(first.begin(),first.end());
        vector<int>first1;
        for(int i=0;i<first.size();i++){
            first1.push_back(first[i][0]);
        }
        vector<int>ans;
        for(int i=0;i<second.size();i++){
            int ind=solve(first,first1,second[i]);
            ans.push_back(ind);
        }
        return ans;
    }
};
