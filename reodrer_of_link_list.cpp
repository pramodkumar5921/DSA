/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* reverse(ListNode*head){
        ListNode*prev=NULL,*n=NULL,*curr=head;
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        } 
         return prev;
}
    ListNode*mid(ListNode*head){
        
        ListNode*fast=head->next;
        ListNode*slow=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    void reorderList(ListNode* head) {
        if(head==NULL) return;
          ListNode*m=mid(head);
            ListNode*a=head;
            ListNode*b=m->next;
            m->next=NULL;
       ListNode*sec=reverse(b);
        // ListNode*newhead=merge(a,sec);
        // return newhead;
        while(sec){
            ListNode*temp1=a->next;
            ListNode*temp2=sec->next;
            a->next=sec;
            sec->next=temp1;
            a=temp1;
            sec=temp2;
        }
        return;
        
    }
};
