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

    void reverse(int left , int right , vector<int>&ans ){
        while(left<=right){
            swap(ans[left], ans[right]);
            left++ , right--;
        }
        return ;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        vector<int>temp;
        ListNode* ans   = new ListNode(-1);
       
        ListNode* temp2 = head;
        while(temp2 != NULL){
            temp.push_back(temp2->val);
            temp2 = temp2 -> next;
        }

        reverse(left-1,right-1,temp);
        temp2=ans;
        for(int i=0; i<temp.size(); i++){
            
            temp2 -> next = new ListNode(temp[i]);
            temp2 = temp2 -> next;

        }
        return ans -> next;
    }
};
