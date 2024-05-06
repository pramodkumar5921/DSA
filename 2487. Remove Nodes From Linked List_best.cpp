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
    ListNode*reverseList(ListNode*head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*last=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return last;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverseList(head);
        ListNode*curr=head,*prev=NULL;
        int maxNode=-1;
        while(curr!=NULL){
            maxNode=max(maxNode,curr->val);
            if(maxNode>curr->val){
                prev->next=curr->next;
                ListNode*temp=curr;
                curr=curr->next;
                delete(temp);
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }

        return reverseList(head);
    }
};
