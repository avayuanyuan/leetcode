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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode*curr=dummy;
        while (curr->next!=NULL and curr->next->next!=NULL){
            swap(curr);
            curr=curr->next->next;
        }
        return dummy->next;
    }
    
    void swap(ListNode* prev){
        ListNode* dummy=prev->next;
        prev->next=dummy->next;
        dummy->next=dummy->next->next;
        prev->next->next=dummy;
    }
};
