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
    ListNode* partition(ListNode* head, int x) {
        // to break it into greater and smaller element
        if(head==NULL){
             return NULL;
        }
        ListNode*smallerele= new ListNode(0,head);
        ListNode*greaterele= new ListNode(0,head);
        smallerele->next=head;
        greaterele->next=head;
        
        ListNode*smallerhead=smallerele;
        ListNode*greaterhead=greaterele;
        while(head!=NULL){
            if(head->val<x){
                smallerele->next=head;
                smallerele=smallerele->next;
            }
            else{
                greaterele->next=head;
                greaterele=greaterele->next;
            }
            head=head->next;
        }
                greaterele->next=NULL;
                // greaterele->next=NULL;
         greaterele->next=NULL;
        smallerele->next=greaterhead->next;
         // greaterele->next=NULL;
        return smallerhead->next;
    }
    // return smallerhead->next;

};
