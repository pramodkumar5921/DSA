class Solution {
    public int numWaterBottles(int Bottles, int Exchange) {
        if(Exchange>Bottles){
            return Bottles;
        }
        int ans=0;
        while(Bottles>=Exchange){
            ans+=Exchange;
            Bottles=Bottles-Exchange;
            Bottles++;
        }
        return ans+Bottles;
    }
}
