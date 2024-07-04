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
    public ListNode mergeNodes(ListNode head) {
        Vector<Integer>arr=new Vector<>();
        int temp=0;
        head=head.next;
        while(head!=null){
            if(head.val==0){
                arr.add(temp);
                temp=0;
            }
            temp=temp+head.val;
            head=head.next;
        }
        ListNode dummy = new ListNode(0);
        ListNode curr=dummy;
        for(int i=0;i<arr.size();i++){
            curr.next=new ListNode(arr.get(i));
            curr=curr.next;
        }
        return dummy.next;
    }
}
