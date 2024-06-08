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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(-1);

      
        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp3=ans;
        while(carry>0 || temp1!=NULL || temp2!=NULL){
            int curr=carry;
            curr+=temp1!=NULL ? temp1->val :0;
            curr+=temp2!=NULL ? temp2->val :0;
            temp3->next=new ListNode(curr%10);
            carry=curr/10;
            if(temp1!=NULL)
            temp1=temp1->next;
            if(temp2!=NULL)
            temp2=temp2->next;
            temp3=temp3->next;
        }
        ans=ans->next;
      
        return ans;
    }
};
