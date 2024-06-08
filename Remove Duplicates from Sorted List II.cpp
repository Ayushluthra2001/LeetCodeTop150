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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans=new ListNode(-1);
        ListNode* temp=head;
        ListNode* temp2=ans;
        while(temp!=NULL){
            if(temp->next!=NULL){
                ListNode* temp3=temp->next;
                if(temp3->val==temp->val){
                     while(temp3!=NULL && temp->val == temp3->val) temp3=temp3->next;
                //temp2->next=new ListNode(temp->val);
                //temp2=temp2->next;
                temp=temp3;
                }else{
                    temp2->next=new ListNode(temp->val);
                    temp=temp->next;
                    temp2=temp2->next;
                }
               
            }else{
                temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
                temp=temp->next;
            }
        }
        return ans->next;
    }
};
