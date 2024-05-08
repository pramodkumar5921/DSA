class Solution {
public:
    vector<int>NSR(vector<int>&heights){
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
    vector<int>NSL(vector<int>heights){
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>grid(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    grid[i][j]=1;
                }
            }
        }
        vector<int>temp=grid[0];
        vector<int>ltemp=NSL(temp);
        vector<int>rtemp=NSR(temp);
        int maxArea=0;
        for(int i=0;i<temp.size();i++){
            int width= abs(ltemp[i]-i)+abs(rtemp[i]-i)-1;
            maxArea=max(maxArea,temp[i]*width);
        }
        for(int row=1;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid[row][col]==0){
                    temp[col]=0;
                }
                else{
                    temp[col]+=1;
                }
            }
            vector<int>Lefttemp=NSL(temp);
            vector<int>Righttemp=NSR(temp);
            for(int i=0;i<temp.size();i++){
               int width= abs(Lefttemp[i]-i)+abs(Righttemp[i]-i)-1;
                maxArea=max(maxArea,temp[i]*width);
            }
        }
        return maxArea;
    }
};
