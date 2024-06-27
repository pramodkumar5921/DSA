class Solution {
    public int findCenter(int[][] edges) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<edges.length;i++){
            for(int j=0;j<edges[i].length;j++){
                if(mp.containsKey(edges[i][j])==true){
                    int temp=mp.get(edges[i][j]);
                    mp.put(edges[i][j],temp+1);
                }
                else{
                    mp.put(edges[i][j],1);
                }
            }
        }
        for(int it:mp.keySet()){
            int temp=mp.get(it);
            if(temp==edges.length){
                return it;
            }
        }
        return 1;
    }
}
