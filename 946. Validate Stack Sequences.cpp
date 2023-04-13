class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>ans;
        stack<int>temp;
        int n=popped.size();
        for(int i=n-1;i>=0;i--){
            temp.push(popped[i]);
        }
        // return false;
        for(int i=0;i<pushed.size();i++){
            if(pushed[i]!=temp.top()){
                ans.push(pushed[i]);
            }
            else if(pushed[i]==temp.top()){
                temp.pop();
                while(ans.size()>0 and temp.size()>0){
                    if(ans.top()==temp.top()){
                    ans.pop();
                    temp.pop();
                    }
                    else{
                        break;
                    }
                }
            }
        }
        // return false;
        while(ans.size()>0 and temp.size()>0){
            if(ans.top()==temp.top()){
                ans.pop();
                temp.pop();
            }
            else{
                break;
            }
        }
        if(temp.size()==0){
            return true;
        }
        return false;
    }
};
