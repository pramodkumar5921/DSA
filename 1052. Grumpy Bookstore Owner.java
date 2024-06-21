class Solution {
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int n=customers.length;
        int i=0,j=0;
        int unSatify=0;
        int temp=0;
        while(i<n){
            if(grumpy[i]==1){
                unSatify+=customers[i];
            }
            if(i-j+1==minutes){
                temp=Math.max(temp,unSatify);
                if(grumpy[j]==1){
                    unSatify-=customers[j];
                }
                j=j+1;
            }
            i=i+1;
        }
        // int ans=0;
        for(int k=0;k<n;k++){
            if(grumpy[k]==0){
                temp+=customers[k];
            }
        }
        return temp;
    }
}
