/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && slow!=NULL){
            slow=slow->next;
            fast=fast->next;

            if(fast!=NULL) fast=fast->next;
             if( fast!=NULL && fast==slow) return true;
        }
        if(slow==NULL || fast==NULL) return false;
       
        return true;
    }
};
