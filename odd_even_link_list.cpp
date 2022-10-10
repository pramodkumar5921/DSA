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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*oddh,*oddt,*evenh,*event;
        oddh=oddt=evenh=event=NULL;
        int cnt=1;
        while(head!=NULL){
            if(cnt%2==0){
                if(evenh==NULL){
                    evenh=event=head;
                    // event=event->next;
                    head=head->next;
                }
                else{
                    event->next=head;
                    event=event->next;
                    head=head->next;
                    }
            }
            else{
                if(oddh==NULL){
                    oddh=oddt=head;
                    // oddt=oddt->next;
                    head=head->next;
                }
                else{
                    oddt->next=head;
                    oddt=oddt->next;
                    head=head->next;
                }
                
            }
            cnt++;
        }
        if(evenh==NULL){
            return oddh;
        }
        if(oddh==NULL){
            return evenh;
        }
        oddt->next=evenh;
        event->next=NULL;
        return oddh;
    }
};
