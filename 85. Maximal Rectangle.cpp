class Solution {
public:
    vector<int>GetNLS(vector<int>height){
        stack<int>st;
         int n=height.size();
        vector<int>NLS(n,0);
        for(int i=0;i<n;i++){
            if(st.size()==0){
                NLS[i]=-1;
            }
            else{
                while(st.size()>0 and height[st.top()]>=height[i]){
                    st.pop();
                }
                if(st.size()==0){
                    NLS[i]=-1;
                }
                else{
                    NLS[i]=st.top();
                }
            }
            st.push(i);
        }
        return NLS;
    }
    vector<int>GetNRS(vector<int>height){
        stack<int>st;
         int n=height.size();
        vector<int>NRS(n,0);
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                NRS[i]=n;
            }
            else{
                while(st.size()>0 and height[st.top()]>=height[i]){
                    st.pop();
                }
                if(st.size()==0){
                    NRS[i]=n;
                }
                else{
                    NRS[i]=st.top();
                }
            }
            st.push(i);
        }
        return NRS;
    }
    int findMaxArea(vector<int>&height){
        int n=height.size();
        vector<int>NLS=GetNLS(height);
        vector<int>NRS=GetNRS(height);
        vector<int>width(n,0);

        for(int i=0;i<n;i++){
            width[i]=NRS[i]-NLS[i]-1;
        }

        int maxarea=0;
        for(int i=0;i<n;i++){
            int a=height[i]*width[i];
            maxarea=max(maxarea,a);
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>height(n,0);
        for(int i=0;i<n;i++){
            if(matrix[0][i]=='1'){
                height[i]=1;
            }
            else{
                height[i]=0;
            }
        }
        int MaxArea=findMaxArea(height);

        for(int row=1;row<m;row++){
            for(int col=0;col<n;col++){
                if(matrix[row][col]=='0'){
                    height[col]=0;
                }
                else{
                    height[col]+=1;
                }
            }
            MaxArea=max(MaxArea,findMaxArea(height));
        }
        return MaxArea;
    }
};
