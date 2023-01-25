class Solution {
public:
    bool check(vector<int>&day,int g,int f,int mid){
        int cnt=0;
       for(int i=0;i<day.size();i++)
       {
           if(day[i]<=mid)
           {
                cnt++;
                if(cnt==f)
                { cnt=0;
                   g--;
                   if(g==0){
                       return true;
                   }
                }
          }
          else{
              cnt=0;
          }
         
    }
    if(g==0){
        return true;
    }
    return false;
      
    }
    int minDays(vector<int>& day, int g, int f) {
        int s=1;
        
        
        int e=*max_element(day.begin(),day.end());
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(day,g,f,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
