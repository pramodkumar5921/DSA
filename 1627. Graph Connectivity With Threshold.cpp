class Solution {
public:
int findparent(int x,vector<int>&parent){
	if(x==parent[x]){
		return x;
	}
	return parent[x]=findparent(parent[x],parent);
}
void combine(int u,int v,vector<int>&parent,vector<int>&subtree){
	int ru=findparent(u,parent);
	int rv=findparent(v,parent);
	if(ru==rv){
		return ;
	}
	if(subtree[ru]>subtree[rv]){
		parent[rv]=ru;
		subtree[ru]+=subtree[rv];
	}
	else{
		parent[ru]=rv;
		subtree[rv]+=subtree[ru];
	}
}
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        int m=queries.size();
        vector<int>parent(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
        vector<int>subtree(n+1,1);
        vector<bool>ans(m,0);
        // if(threshold<1){
        //     for(int i=0;i<m;i++){
        //         ans[i]=1;
        //     }
        //     return ans;
        // }
        for(int i=threshold+1;i<=n;i++){
             for(int factor=i;factor<=n;factor=factor+i){
                // if(factor>threshold){
                    // if(i%factor==0){
                        combine(i,factor,parent,subtree);
                    // }
                // }
            }
        }
        for(int i=0;i<m;i++){
            int u=queries[i][0];
            int v=queries[i][1];
            if(findparent(u,parent)==findparent(v,parent)){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
           return ans; 
    }
};
