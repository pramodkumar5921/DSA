import java.util.*;
class Solution {
    public int passThePillow(int n, int time) {
        if(time<n){
            return time+1;
        }
        Vector<Integer>arr=new Vector<>();
        Vector<Integer>arr1=new Vector<>();
        Vector<Integer>arr2=new Vector<>();
        for(int i=1;i<=n;i++){
            arr1.add(i);
        }
        for(int i=n-1;i>1;i--){
            arr2.add(i);
        }
        int cnt=0;
        while(cnt<=1000){
            if(cnt%2==0){
                for(int i=0;i<arr1.size();i++){
                    arr.add(arr1.get(i));
                }
            }
            else{
                for(int i=0;i<arr2.size();i++){
                    arr.add(arr2.get(i));
                }
            }
            cnt=cnt+1;
        }
        // for(int i=0;i<arr.size();i++){
        //     System.out.print(arr.get(i));
        // }
        return arr.get(time);
    }
}
