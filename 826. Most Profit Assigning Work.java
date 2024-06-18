import java.util.Vector;
class Solution {
    static class pair{
        int difficulty;
        int profit;

        pair(int difficulty,int profit){
            this.difficulty=difficulty;
            this.profit=profit;
        }
    }
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        Vector<pair>arr=new Vector<>();
        int n=profit.length;
        for(int i=0;i<n;i++){
            arr.add(new pair(difficulty[i],profit[i]));
        }
        arr.sort(Comparator.comparingInt(a -> a.difficulty));
        int ans=0;
        Arrays.sort(worker);
        int i=0;
        int temp=0;
        for(int ability : worker){
            // int temp=0;
            while(i<worker.length && ability>=arr.get(i).difficulty){
                temp=Math.max(temp,arr.get(i).profit);
                i=i+1;
            }
            ans=ans+temp;
        }
        return ans;
    }
}
