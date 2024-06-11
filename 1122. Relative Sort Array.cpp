import java.util.Vector;

class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        Vector<Integer> vis = new Vector<Integer>(1001);
        for (int i = 0; i < 1001; i++) {
            vis.add(0);
        }
        for (int i = 0; i < arr1.length; i++) {
            vis.set(arr1[i], vis.get(arr1[i]) + 1);
        }
        Vector<Integer> ans = new Vector<Integer>();
        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < vis.get(arr2[i]); j++) {
                ans.add(arr2[i]);
            }
            vis.set(arr2[i], 0);
        }
        for (int i = 0; i < 1001; i++) {
            for (int j = 0; j < vis.get(i); j++) {
                ans.add(i);
            }
        }
      int[] result=new int[ans.size()];
      for(int i=0;i<ans.size();i++){
        result[i]=ans.get(i);
      }
      return result;
    }
}
