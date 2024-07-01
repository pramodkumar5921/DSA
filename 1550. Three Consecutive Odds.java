class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        for(int i=0;i<=arr.length-3;i++){
            boolean flag=false;
            for(int j=i;j<=i+2;j++){
                if(arr[j]%2==0){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                return true;
            }
        }
        return false;
    }
}
