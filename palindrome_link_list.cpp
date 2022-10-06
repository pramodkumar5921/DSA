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
    ListNode* reversell(ListNode*&head){
        ListNode*c=head,*p=NULL,*n;
        if(head==NULL) return NULL;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
        return head;
    }
    void print(ListNode*head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
    }
    bool isPalindrome(ListNode* head) {
       ListNode*slow=head,*fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reversell(slow->next);
        ListNode*start=head,*mid=slow->next;
        while(mid!=NULL){
            if(mid->val!=start->val) return false;
            mid=mid->next;
            start=start->next;
        }
        // print(head);
        cout<<endl;
        slow->next=reversell(slow->next);
        // print(head);
        return true;
    }
};
