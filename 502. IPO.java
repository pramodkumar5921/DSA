import java.util.*;

class Solution {
    class Pair {
        int first;
        int second;

        public Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }

    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
        Vector<Pair> v = new Vector<>();
        int n = profits.length;

        // Create pairs of capital and profits
        for (int i = 0; i < n; i++) {
            v.add(new Pair(capital[i], profits[i]));
        }

        // // Sort pairs by capital in ascending order
        // Collections.sort(v, new Comparator<Pair>() {
        //     @Override
        //     public int compare(Pair p1, Pair p2) {
        //         return Integer.compare(p1.first, p2.first);
        //     }
        // });

        Collections.sort(v,new Comparator<Pair>(){
            @Override
            public int compare(Pair p1,Pair p2){
                return Integer.compare(p1.first,p2.first);
            }
        });

        int i = 0;
        int currentCapital = w;
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        while (k > 0) {
            while (i < n && currentCapital >= v.get(i).first) {
                pq.add(v.get(i).second);
                i++;
            }
            if (pq.isEmpty()) {
                break;
            }
            currentCapital += pq.poll();
            k--;
        }
        return currentCapital;
    }
}
