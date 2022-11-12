class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        unordered_set<int>st;
        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
       
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
           int key=nums1[i];
            if(st.find(key)!=st.end() and key!=0){
                ans.push_back(key);
                cnt++;
            } 
            if(cnt==m){
                break;
            }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        
        nums1.erase(nums1.begin(),nums1.end());
        
         for(int i=0;i<ans.size();i++){
             int key=ans[i];
             nums1.push_back(key);
         }  
     
        int rnt=0;
        for(int i=0;i<nums2.size();i++){
            int key=nums2[i];
            nums1.push_back(key);
            rnt++;
            if(rnt==n){
                break;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            int key=it->first;
            int val=it->second;
            if(key==0){
                while(val>n){
                    nums1.push_back(key);
                    val--;
                }
            }
        }
        sort(nums1.begin(),nums1.end());

        return ;
    }
};
