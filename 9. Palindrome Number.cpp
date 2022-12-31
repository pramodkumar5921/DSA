class Solution {
public:
    bool isPalindrome(int x) {
        vector<long long int>v;
        if(x<0){
            return false;
        }
        int k=x;
        while(x>0){
            int rem=x%10;
            v.push_back(rem);
            x=x/10;
        }
        long long int num=0;
        for(int i=0;i<v.size();i++){
            num=num*10+v[i];
        }
        cout<<num;
        if(k == num){
            return true;
        }
        return false;
    }
};
