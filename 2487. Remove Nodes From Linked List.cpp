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
    ListNode* removeNodes(ListNode* head) {
        vector<int>arr1;
        ListNode* temp=head;
        while(head!=NULL){
            arr1.push_back(head->val);
            head=head->next;
        }
        int n=arr1.size();
        ListNode *resultHead=new ListNode(arr1[n-1]);
        int maxNode=arr1[n-1];
        for(int i=n-2;i>=0;i--){
            if(maxNode>arr1[i]){
                continue;
            }
            else{
            maxNode=arr1[i];
            ListNode *newHead=new ListNode(arr1[i]);
            newHead->next=resultHead;
            resultHead=newHead;
            }
        }
        return resultHead;
    }
};
