// import java.util.ArrayList;
// import java.util.Collections;
class Solution {
    public int heightChecker(int[] heights) {
        List<Integer>arr = new ArrayList<>();
        for(int i=0;i<heights.length;i++){
            arr.add(heights[i]);
        }
        Collections.sort(arr);
        int ans=0;
        for(int i=0;i<heights.length;i++){
            if(!arr.get(i).equals(heights[i])){
                ans++;
            }
        }
        return ans;
    }
}
