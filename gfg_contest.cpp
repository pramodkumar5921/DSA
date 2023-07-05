 static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return (a.first-a.second)>(b.first-b.second);
        if(a.first-a.second==b.first-b.second){
            return a.first<b.first;
        }
        return -1;
    }
    int minimumMagic(int n, int m, vector<int> &price, vector<int> &magical_price)
    {
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=price[i];
            sum2+=magical_price[i];
        }
        if(sum1<=m){
            return 0;
        }
       if(sum2>m){
           return -1;
       }
       vector<pair<int,int>>temp(n);
       for(int i=0;i<n;i++){
           temp[i].first=price[i];
           temp[i].second=magical_price[i];
       }
       sort(temp.begin(),temp.end(),cmp);
       int cnt=0;
       for(int i=0;i<n;i++){
           if(m>=sum1){
               break;
           }
           else if(m!=sum1){
               cnt++;
               m=m-temp[i].second;
               sum1=sum1-temp[i].first;
           }
           
       }
       return cnt;
    }
};
