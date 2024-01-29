class Solution {
public:
    void build(int beg,int end,int pos,vector<int>&freq,vector<int>&st){
        if(beg==end){
            st[pos]=freq[beg];
            return;
        }
        int mid=(beg+end)/2;
        build(beg,mid,2*pos+1,freq,st);
        build(mid+1,end,2*pos+2,freq,st);
        st[pos]=st[2*pos+1]+st[2*pos+2];
    }
    void update(int beg,int end,int idx,int val,int pos,vector<int>&freq,vector<int>&st){
        if(beg==end){
            st[pos]=val;
            return;
        }
        int mid=(beg+end)/2;
        if(idx<=mid){
            update(beg,mid,idx,val,2*pos+1,freq,st);
        }
        else{
            update(mid+1,end,idx,val,2*pos+2,freq,st);
        }
        st[pos]=st[2*pos+1]+st[2*pos+2];
    }
    int query(int beg,int end,int ql,int qr,int pos,vector<int>&freq,vector<int>&st){
        if(ql<=beg and qr>=end){
            return st[pos];
        }
        else if(ql>end or qr<beg){
            return 0;
        }
        int mid=(beg+end)/2;
        return query(beg,mid,ql,qr,2*pos+1,freq,st)+query(mid+1,end,ql,qr,2*pos+2,freq,st);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        vector<int>temp=nums;
        if(mini<0){
            for(int i=0;i<nums.size();i++){
                temp[i]=temp[i]-mini;
                }
            }
        vector<int>freq(20005,0);
        vector<int>st(80009,0);
        build(0,20000,0,freq,st);
        int n=nums.size();
        vector<int>res(n,0);
        unordered_map<int,int>mp;
        for(int i=n-1;i>=0;i--){
            int ans=query(0,20000,0,temp[i]-1,0,freq,st);
            res[i]=ans;
            mp[nums[i]]++;
            update(0,20000,temp[i],1*mp[nums[i]],0,freq,st);
        }
        return res;
    }
};
