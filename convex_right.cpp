#include<bits/stdc++.h>
using namespace std;
struct point{
    long long x;
    long long y;
};
point p0;
int orientation(point a,point b,point c){
    long long o =(long long)(b.y-a.y)*(c.x-a.x)-(long long)(c.y-a.y)*(b.x-a.x);
    if(o==0){
        return 0;
    }
    else if(o<0){
        return -1;
    }
    return 1;
}
long long dist(point a,point b){
    long long x=(long long)(a.x-b.x)*(a.x-b.x);
    long long y=(long long)(a.y-b.y)*(a.y-b.y);
    return x+y;
}
bool cmp(point a,point b){
    int o=orientation(p0,a,b);
    if(o==0){
        return dist(p0,a)<=dist(p0,b);
    }
    return o==-1;
}
void solve(){
    int n;
    cin>>n;
    vector<point>points(n);
    for(int i=0;i<n;i++){
        cin>>points[i].x>>points[i].y;
    }
    p0=points[0];
    for(int i=0;i<n;i++){
        if(i==0){
            p0=points[i];
        }
        else if(points[i].x<p0.x){
            p0=points[i];
        }
        else if(points[i].x==p0.x and points[i].y<p0.y){
            p0=points[i];
        }
    }
    sort(points.begin(),points.end(),cmp);
    stack<point> stack;
    stack.push(points[0]);
    stack.push(points[1]);
    vector<point>hull;
    for(int i=2;i<n;i++){
        while(stack.size()>1){
        point p1=stack.top();
        stack.pop();
        point p2=stack.top();
        if(orientation(p2,p1,points[i])==-1){
            stack.push(p1);
            break;
        }
        }
        stack.push(points[i]);
    }
    while (!stack.empty()) {
        hull.push_back(stack.top());
        stack.pop();
    }
    for(auto it:hull){
        cout<<it.x<<" "<<it.y<<endl;
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
