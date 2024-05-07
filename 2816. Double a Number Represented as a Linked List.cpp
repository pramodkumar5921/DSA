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
    vector<int>Elements(ListNode*head){
        vector<int>temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
         return temp;     
    }
    vector<int>Add(vector<int>&arr1,vector<int>&arr2){
        vector<int>temp;
        int n=arr1.size();
        int i=n-1; 
        int carry=0;
        while(i>=0){
            int num=(arr1[i]+arr2[i]+carry);
            int total=num%10;
            temp.push_back(total);
            carry=num/10;
            i--;
        }
        if(carry!=0){
            temp.push_back(carry);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
    ListNode* doubleIt(ListNode* head) {
        vector<int>arr1=Elements(head);
        vector<int>arr2=arr1;
        vector<int>result=Add(arr1,arr2);
        ListNode*ansHead=new ListNode(result[0]);
        int i=1;
        int n=result.size();
        ListNode*ans=ansHead;
        while(i<n){
            ListNode*newHead=new ListNode(result[i]);
            ansHead->next=newHead;
            ansHead=ansHead->next;
            i++;
        }
        return ans;
    }
};
