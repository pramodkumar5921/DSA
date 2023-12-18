// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// struct Point{
// ll x;
// ll y;
// };
// const int N = 1e5;
// Point points[N+1];
// Point p0;
// int orientation(Point a , Point b , Point c){
// ll o = (c.x - b.x) * (b.y - a.y) - (c.y - b.y) * (b.x - a.x);
// //0 = collinear
// //-1 = anti-clockwise
// // 8
// //1 = clockwise
// if(o == 0) return 0;
// else
// if(o > 0) return 1;
// else return -1;
// }
// ll dist(Point a , Point b){
// ll dx = a.x - b.x;
// ll dy = a.y - b.y;
// return dx*dx + dy*dy;
// }
// bool comp(Point a , Point b){
// int o = orientation(p0 , a , b);
// if(o == 0){
// return dist(p0 , a) <= dist(p0 , b);
// }else{
// return o == -1;
// }
// }
// int main(){
// int t , n;
// cin>>t;
// while(t--){
// cin>>n;
// for(int i=1;i<=n;i++){
// cin>>points[i].x>>points[i].y;
// if(i == 1) p0 = points[i];
// else
// if(points[i].x < p0.x) p0 = points[i];
// else
// if(p0.x == points[i].x && p0.y > points[i].y) p0 =
// points[i];
// // 9
// }
// sort(points + 1 , points + n + 1 , comp);
// //taking care of collinear points
// int i = n - 1;
// while(i > 1 && orientation(p0 , points[i] , points[n]) == 0) i--;
// reverse(points + i + 1 , points + n + 1);
// vector<Point> hull;
// for(int i=1;i<=n;i++){
// while (hull.size() > 1 && orientation(hull[hull.size() - 2],
//                                       hull[hull.size() - 1], points[i]) >= 0) {
//   hull.pop_back();
// }
// hull.push_back(points[i]);
// }
// for (Point p : hull)
// cout << p.x << " " << p.y << endl;
// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct point{
    ll x;
    ll y;
};
const int N=1e5;
point points[N+1];
point p0;

int orientation(point a,point b,point c){
    ll o=(c.x-b.x)*(b.y-a.y)-(c.y-b.y)*(b.x-a.x);
    if(o==0){
        return 0;
    }
    else if(o>0){
        return 1;
    }
    else return -1;
}
ll dist(point a,point b){
    ll dx=a.x-b.x;
    ll dy=a.y-b.y;

    return dx*dx+dy*dy;
}
bool comp(point a,point b){
    int o=orientation(p0,a,b);
    if(o==0){
        return dist(p0,a)<=dist(p0,b);
    }
    else{
        return o==-1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>points[i].x>>points[i].y;
            if(i==1){
                p0=points[i];
            }
            else if(points[i].x<p0.x){
                p0=points[i];
            }
            else if(p0.x==points[i].x and p0.y>points[i].y){
                p0=points[i];
            }
        }
        sort(points+1,points+n+1,comp);
        int i=n-1;
        while (i > 1 and orientation(p0, points[i], points[n])==0) {
            i--;
        }
        reverse(points+i+1,points+n+1);
        vector<point>hull;
        for(int i=1;i<=n;i++){
            while(hull.size()>1 && orientation(hull[hull.size()-2],hull[hull.size()-1],points[i])>=0){
                hull.pop_back();
            }
            hull.push_back(points[i]);
        }
        for(point p:hull){
            cout<<p.x<<" "<<p.y<<endl;
        }
    }
    return 0;
}
