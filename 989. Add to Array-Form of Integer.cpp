class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int c=0;
       int i=num.size()-1;
       vector<int>ans;
       while(i>=0){
           int a=num[i];
           int b=k%10;
           k=k/10;
           if(a+b+c<=9){
               ans.push_back(a+b+c);
               c=0;
           }
           else if(a+b+c>=10){
               int temp=(a+b+c)%10;
               ans.push_back(temp);
               c=(a+b+c)/10;
           }
           i--;
       }
    //    if(c>=1 and k<1){
    //        ans.push_back(c);
    //    }
       while(k>0){
           int a=k%10;
           if(a+c<=9){
               ans.push_back(a+c);
               c=0;
           }
           else if(a+c>=10){
               int temp=(a+c)%10;
               ans.push_back(temp);
               c=(a+c)/10;
           }
           k=k/10;
       }
       if(c>=1 and k<1){
           ans.push_back(c);
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
