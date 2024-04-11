class Solution {
public:
    string removeKdigits(string num, int k) {
        string result="";
        for(int i=0;i<num.size();i++){
            while(result.size()>0 and result.back()>num[i] and k>0){
                result.pop_back();
                k--;
            }
            if(result.size()>0 || num[i] != '0'){
                result.push_back(num[i]);
            }
        }
        while(k>0 and result.size()>0){
            result.pop_back();
            k--;
        }

        if(result==""){
            return "0";
        }
        return result;
    }
};
