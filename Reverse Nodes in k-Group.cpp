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
void reverse(int start, int end , vector<int>& data){

    while(start<=end){
        swap(data[start],data[end]);
        start++ , end --;
    }
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> data;

        ListNode* temp   = head;
        ListNode* result = new ListNode(-1);

        while( temp != NULL) {
            data.push_back(temp -> val);
            temp = temp ->next;
        }
        int i=0;
        while(i<=data.size()-k){
            int start = i;
            int end   = i+k-1;
            reverse(start,end,data);
            i=i+k;  
        }

        temp = result;

        for(int i = 0; i < data.size(); i++){

            temp -> next = new ListNode(data[i]);
            temp = temp -> next;

        }

        return result -> next;
    }
};
//[1,2,3,4,5]
