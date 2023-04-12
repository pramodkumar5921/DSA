class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string>st;
        for(int i=0;i<n;){
            string temp;
            if(path[i]=='/'){
                i++;
              continue;
            }
            while(i<path.size() and path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                // i++;
                continue;
            }
            if(temp==".."){
                if(st.size()>0){
                    st.pop();
                }
            }
            else{
                st.push(temp);
                i++;
            }
        }
         string ans="/";
       while(st.size()>0){
           ans="/"+st.top()+ans;
           st.pop();
       }
       if(ans.size()==1){
           return ans;
       }
       ans.pop_back();
        return ans;
    }
};
