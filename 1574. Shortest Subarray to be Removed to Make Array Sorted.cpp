class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int mini=INT_MAX;
        vector<int>left;
        int n=arr.size();
        if(arr.size()==1){
            return 0;
        }
        
        left.push_back(arr[0]);
        int i;
        for( i=1;i<n;i++){
            if(arr[i-1]<=arr[i]){
                left.push_back(arr[i]);
            }else{
                break;
            }
        }
        vector<int>right;
        
        if(i!=n){
            i=n-1;

            right.push_back(arr[i]);
            for(int i=n-2;i>=0;i--)
            {
                if(arr[i+1]>=arr[i])
                {
                   right.push_back(arr[i]);
                }
                else{
                 

                    break;
                }
            }
           
          
           

        }
        reverse(right.begin(),right.end());
        for(int i=0;i<left.size();i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<right.size();i++){
            cout<<right[i]<<" ";
        }
        for(int i=0;i<left.size();i++){
            int ind=lower_bound(right.begin(),right.end(),left[i])-right.begin();
            if( ind<right.size())
            {
               int rg=n-(right.size()-ind+i+1);
                mini=min(mini,rg);
                cout<<mini<<endl;
            }
           
                int t=max(left.size(),right.size());
               mini=min(mini,n-t);
            
        }
        if(mini==INT_MAX){
            if(right.size()==0){
                return 0;
            }else{
                return n-1;
            }
        }
        return mini;

    }
};
