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
    // ListNode*reverse(ListNode*head){
    //      ListNode*prev=NULL,*n=NULL,*curr=head;
    //     while(curr!=NULL){
    //         n=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=n;
    //     }
    //     return prev;
    // }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL or left==right){
            return head;
        }
        ListNode*prev,*tail=NULL,*temp=NULL;
        ListNode *dummy=new ListNode(0,head);
        prev=dummy;
        dummy->next=head;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        tail=prev->next;
        for(int i=0;i<right-left;i++){
            temp=prev->next;
            prev->next=tail->next;
            tail->next=tail->next->next;
            prev->next->next=temp;
        }
        return dummy->next;
    }
};
