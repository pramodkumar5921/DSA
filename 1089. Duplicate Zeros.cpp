class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans.push_back(arr[i]);
            if(arr[i]==0){
                ans.push_back(0);
            }
            if(ans.size()==n){
                break;
            }
        }
     
        cout<<endl;
       // arr.erase(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }

    }
};
