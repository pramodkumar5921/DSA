#include<bits/stdc++.h>
using namespace std;
bool isSquare(vector<int> x, vector<int> y) {
        int n=x.size();
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
                arr[i].first=x[i];
                arr[i].second=y[i];
        }
        vector<long long>res;
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        long long x1=arr[i].first;
                        long long y1=arr[i].second;
                        long long x2=arr[j].first;
                        long long y2=arr[j].second;
                        long long cnt = (long long)(x2-x1)*(x2-x1)+(long long)(y2-y1)*(y2-y1);
                        res.push_back(cnt);
                }
        }
        unordered_map<long long ,long long>mp;
        for(int i=0;i<res.size();i++){
                mp[res[i]]++;
        }
        long long temp=0;
        for(auto it:mp){
                if(it.second==4){
                        temp=it.first;
                }
        }
        if(temp==0){
                return false;
        }
        // cout<<temp<<endl;
        return true;

        // unordered_map<pair<long long,long long>,vector<pair<long long,long long>>>mp1;
        // long long first1=0;
        // long long second1=0;
        //  for(int i=0;i<n;i++){
        //         for(int j=i+1;j<n;j++){
        //                 long long x1=arr[i].first;
        //                 long long y1=arr[i].second;
        //                 long long x2=arr[j].first;
        //                 long long y2=arr[j].second;
        //                 long long cnt = (long long)(x2-x1)*(x2-x1)+(long long)(y2-y1)*(y2-y1);
        //                if(cnt==temp){
        //                        first1=x;
        //                        second1=y;
        //                        mp1[{x1,y1}].push_back({x2,y2});
        //                        mp1[{x2,y2}].push_back({x1,y1});
        //                }
        //         }
        // }
        // unordered_set<pair<long long,long long>>st;
        // vector<pair<long long,long long>>ans;
        // queue<pair<long long,long long>>q;
        // q.push({first1, second1});
        // while(q.size()>0){
        //         long long a=q.front.first;
        //         long long b=q.front.second;
        //         ans.push_back({a,b});
        //         st.insert({a,b});
        //         q.pop();
        //         for(int i=0;i<mp1[{first1,second1}].size();i++){
        //                 long long a=mp1[i].first;
        //                 long long b=mp1[i].second;
        //                 if(st.find({a,b})==st.end()){
        //                         q.push({a,b});
        //                 }
        //         }
        // }
        // long long x1=ans[0].first;
        // long long y1=ans[0].second;
        // long long x3=ans[2].first;
        // long long y3=ans[2].second;
        // long long x2=ans[1].first;
        // long long y2=ans[1].second;
        // long long x4=ans[4].first;
        // long long y4=ans[4].second;
        // long long d1=(long long)(x1-x3)*(x1-x3)+(long long)(y1-y3)*(y1-y3);
        // long long d2=(long long)(x2-x4)*(x2-x4)+(long long)(y2-y4)*(y2-y4);
        // if(d1==d2){
        //         return true;
        // }
        // return false;
}
