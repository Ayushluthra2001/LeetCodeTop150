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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> data;
        

        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL) {
                data.push_back(temp -> val);
                 temp = temp -> next;
            }
        }
        sort(data.begin(),data.end());

        ListNode* ans  = new ListNode(-1);
        ListNode* temp = ans;
        for(int i=0; i<data.size(); i++){

            temp -> next = new ListNode(data[i]);
            temp = temp -> next;

        }
        return ans->next;
    }
};
