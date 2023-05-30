int maxOfK(int n, int k, vector<int> &num)
{
    int ans=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            ans+=num[i];
        }
        return ans;
    }
    int i=0,j=0;
    int maxi=INT_MIN;
    while(i<n){
        ans+=num[i];
        if(i-j+1==k){
            // j++;
            maxi=max(maxi,ans);
            ans=ans-num[j];
            j++;
        }
        i++;
    }
    return maxi;
}
