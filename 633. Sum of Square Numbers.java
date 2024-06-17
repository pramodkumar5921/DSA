import java.util.Vector;
class Solution {
    public boolean judgeSquareSum(int c) {
        Vector<Long>arr = new Vector<>();
        for(int i=0;i<=100000;i++){
            Long temp= ((long)i*i);
            arr.add(temp);
        }
        int i=0,j=arr.size()-1;
        while(i<=j){
            Long res=arr.get(i)+arr.get(j);
            if(res==c){
                return true;
            }
            else if(res>c){
                j--;
            }
            else{
                i=i+1;
            }
        }
        return false;
    }
}
