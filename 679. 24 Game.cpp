#include<bits/stdc++.h>
using namespace std;
vector<double>generate(double&a,double&b){
    vector<double>res={a+b,a*b,a-b,b-a};
    if(a!=0){
        res.push_back(b/a);
    }
    if(b!=0){
        res.push_back(a/b);
    }
    return res;
}
// return 0;
bool solve(vector<double>list){
    // int n=list.size();
    if(list.size()==1){
        if(abs(list[0]-24)<=0.1){
            return true;
        }
        return false;
    }
    // return 0;
    for(int i=0;i<list.size();i++){
        for(int j=i+1;j<list.size();j++){
            vector<double>newlist;
            for(int k=0;k<list.size();k++){
                if(k!=i and k!=j){
                    newlist.push_back(list[k]);
                }
            }
            vector<double>res=generate(list[i],list[j]);
            for(auto &it:res){
                newlist.push_back(it);
                if(solve(newlist)==true){
                    return true;
                }
                newlist.pop_back();
            }
        }
    }
    return false;
}
bool judge(vector<int> &nums) {
    vector<double>list={nums.begin(),nums.end()};
    return solve(list);
}
