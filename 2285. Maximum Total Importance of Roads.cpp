class Solution {
    public long maximumImportance(int n, int[][] roads) {
        int arr[]=new int[n];
        for(int i=0;i<roads.length;i++){
            int first=roads[i][0];
            int sec=roads[i][1];
            arr[first]++;
            arr[sec]++;
        }
        Arrays.sort(arr);
        int temp=n;
        long ans=0;
        for(int i=n-1;i>=0;i--){
            ans=ans+ ((long)arr[i]*(long)temp);
            temp--;
        }
        return ans;
    }
}
