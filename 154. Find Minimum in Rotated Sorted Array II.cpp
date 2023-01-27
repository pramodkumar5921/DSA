class Solution {
public:
     int findMin(vector<int>& nums) {
       unordered_map<int,int>mp;
       vector<int>v;
       for(int i=0;i<nums.size();i++){
          
           if(mp.find(nums[i])==mp.end()){
              mp[nums[i]]=1;
              v.push_back(nums[i]);
           }
          
       }
       for(auto x:v){
           cout<<x<<" ";
       }
        int l=0;
       int h=v.size()-1;
       int mid;
       while(l<=h){
           mid=l+(h-l)/2;
           if(v[mid]<v[h]){
               h=mid;
           }
           else{
               l=mid+1;
           }
       }

       return v[mid];
       

    }
};
