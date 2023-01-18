class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
		// sort the given arr
        sort(position.begin(),position.end());
        int ans = -1;
        int l = 0, r = position[n-1];
		
        while(l <= r ){
          int mid = l + (r-l)/2;
          int cnt = 1, last_pos = position[0];
          bool flag = false;
          for(int i = 0; i<n; i++){
            if(position[i] - last_pos >= mid){
              cnt++;
              if(cnt == m){
                flag = true;
                break;
              }
              last_pos = position[i];
            }
          }
          if(flag){
            ans = max(ans,mid);
            l = mid +1;
          }
          else r = mid-1;
        }
      return ans;
    }
};
