/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
 import java.util.*;
class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        int temp=1;
        int len=1;
        int prev=head.val;
        Vector<Integer>arr=new Vector<>();
        int[] ans = new int[2];
        head=head.next;
        while(head.next!=null){
            temp++;
            len++;
            if(head.val>prev && head.val>head.next.val){
                arr.add(len);
            }
            if(head.val<prev && head.val<head.next.val){
                arr.add(len);
            }
            prev=head.val;
            head=head.next;
        }
        len++;
         if(len<4 || arr.size()<=1){
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        int maxi= Math.abs(arr.get(0) - arr.get(arr.size()-1));
        int mini=1000000;
        int ele=arr.get(0);
        for(int i=1;i<arr.size();i++){
            mini = Math.min(mini , Math.abs(ele-arr.get(i)));
            ele=arr.get(i);
        }
        ans[0]=mini;
        ans[1]=maxi;
        return ans;
    }
}
