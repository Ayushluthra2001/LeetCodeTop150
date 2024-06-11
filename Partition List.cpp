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
        vector<int>temp1;
        vector<int>temp2;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x) temp1.push_back(temp->val);
            else temp2.push_back(temp->val);

            temp=temp->next;
        }
        ListNode* dummy = new ListNode(-1);
        temp=dummy;
        for(int i=0;i<temp1.size() ;i++) {
            temp->next=new ListNode(temp1[i]);
            temp=temp->next;
        }
        for(int i=0;i<temp2.size();i++){
            temp->next = new ListNode(temp2[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};
