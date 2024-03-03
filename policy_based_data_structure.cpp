#include<ext/pb_ds/assoc_container.hpp>
    using namespace __gnu_pbds;
typedef tree<
pair<int,int>,
null_type,
less<pair<int,int>>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
class Solution {
public:
    
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans,arr1,arr2;
        ordered_set s1,s2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        s1.insert({nums[0],0});
        s2.insert({nums[1],1});
        
        for(int i=2;i<nums.size();i++){
            int val=nums[i]+1;
            int id1=s1.order_of_key({val,0});
            int id2=s2.order_of_key({val,0});
            
            int sz1=arr1.size()-id1;
            int sz2=arr2.size()-id2;
            
            if(sz1>sz2){
                arr1.push_back(nums[i]);
                s1.insert({nums[i],i});
            }
            else if(sz1<sz2){
                arr2.push_back({nums[i]});
                s2.insert({nums[i],i});
            }
            else if(sz1==sz2){
                if(arr1.size()<=arr2.size()){
                  arr1.push_back(nums[i]);
                s1.insert({nums[i],i});
                }
                else{
                    arr2.push_back({nums[i]});
                s2.insert({nums[i],i});
                }
            }
        }
        ans=arr1;
        for(auto ele:arr2){
            ans.push_back(ele);
        }
        return ans;
    }
};
