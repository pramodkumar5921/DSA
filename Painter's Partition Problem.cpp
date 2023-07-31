bool check(long long mid,vector<int>&boards,int k){
    int cnt=1;
    int n=boards.size();
    long long temp=0;
    for(int i=0;i<n;i++){
      temp+=boards[i];
      if(temp>mid){
          cnt++;
          temp=0;
          temp=boards[i];
      }
    }
    return cnt<=k;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    long long left=*max_element(boards.begin(),boards.end());
    long long right=0;
    for(auto it:boards){
        right+=it;
    }
    long long ans=left;
    while(left<=right){
        long long mid=left+(right-left)/2;
        if(check(mid,boards,k)){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}
