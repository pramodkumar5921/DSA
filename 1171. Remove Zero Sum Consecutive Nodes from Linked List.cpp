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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*dummy=new ListNode(0);
        unordered_map<int,ListNode*>mp;
        mp[0]=dummy;
        dummy->next=head;
        int PrefixSum=0;
        while(head!=NULL){
            PrefixSum+=head->val;
            if(mp.find(PrefixSum)!=mp.end()){
                ListNode*start=mp[PrefixSum];
                ListNode*temp=start->next;
                int psum=PrefixSum;
                while(temp!=head){
                    psum+=temp->val;
                    mp.erase(psum);
                    temp=temp->next;
                }
                start->next=head->next;
            }
            else{
                mp[PrefixSum]=head;                
            }
            head=head->next;
        }
        return dummy->next;
    }
};
