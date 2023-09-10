class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xdist = abs(fx-sx);
        int ydist = abs(fy-sy);
        int dia = min(xdist,ydist);
        xdist = xdist-dia;
        ydist = ydist-dia;
        int total = xdist+ydist+dia;
        if(total == 0 and t==1){
            return 0;
        }
        return total<=t;
    }
};
