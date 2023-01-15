class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        while(k>sum){
            k-=sum;
        }
        int i;
        for(i=0;i<chalk.size();i++){
            if(k>=chalk[i]){
                k-=chalk[i];
            }
            else if(k<chalk[i]){
                return i;
            }
        }
        if(i==chalk.size()-1 and k==0){
            return 0;
        }
        return 0;
    }
};
