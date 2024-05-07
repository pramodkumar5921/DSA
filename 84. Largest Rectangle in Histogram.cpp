class Solution {
public:
    vector<int>NRS(vector<int>&heights){
        int n=heights.size();
        vector<int>right(n,0);
        right[n-1]=n;
        stack<int>st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0){
                int topIdx=st.top();
                if(heights[i]<=heights[topIdx]){
                    st.pop();
                }
                else{
                    break;
                }
            }
            if(st.size()==0){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
        return right;
    }
    vector<int>NLS(vector<int>heights){
        int n=heights.size();
        vector<int>left(n,0);
        stack<int>st;
        left[0]=-1;
        st.push(0);
        for(int i=1;i<n;i++){
            while(st.size()>0){
                int topIdx=st.top();
                if(heights[i]<=heights[topIdx]){
                    st.pop();
                }
                else{
                    break;
                }
            }
            if(st.size()==0){
                left[i]=-1;
            }
            else{
                left[i]=st.top();
            }
            st.push(i);
        }
        return left;
    }    
    int largestRectangleArea(vector<int>& heights) {
        vector<int>right=NRS(heights);
        vector<int>left=NLS(heights);
        int ans=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            int total=abs(right[i]-i)+abs(left[i]-i)-1;
            ans=max(ans,total*heights[i]);
        }
        return ans;
    }
};
