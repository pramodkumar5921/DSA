class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        res.push_back(12);
        res.push_back(23);
        res.push_back(34);
        res.push_back(45);
        res.push_back(56);
        res.push_back(67);
        res.push_back(78);
        res.push_back(89);
        int s=0;
        for(int i=1;i<=8;i++){
            int last=res.size();
            for(int j=s+1;j<last;j++){
                string s1=to_string(res[j-1]);
                string s2=to_string(res[j]);
                int sz=s2.size();
                s1+=s2[sz-1];
                int ele=stoi(s1);
                res.push_back(ele);
            }
            s=last;
        }
        vector<int>ans;
        for(int i=0;i<res.size();i++){
            if(res[i]>=low and res[i]<=high){
                ans.push_back(res[i]);
            }
        }
        return ans;
    }
};
