class Solution {
public:
    int afirst(string &s,int x){
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
                continue;
            }
            else if(s[i]=='b'){
                char ch=st.top();
                if(ch=='a'){
                    ans+=x;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string str;
        while(st.size()>0){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        s=str;
        return ans;
    }
    int bfirst(string &s,int y){
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
                continue;
            }
            else if(s[i]=='a'){
                char ch=st.top();
                if(ch=='b'){
                    ans+=y;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string str;
        while(st.size()>0){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        s=str;
        return ans;
    }
    int maximumGain(string s, int x, int y) {
        int total=0;
        if(x>y){
            total+=afirst(s,x);
            total+=bfirst(s,y);
        }
        else{
             total+=bfirst(s,y);
             total+=afirst(s,x);
        }
        return total;
    }
};
