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
    ListNode* reverseList(ListNode* head) {
        //base case
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
           
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* stored = NULL;

        while(curr != NULL){
            stored = curr->next;
            curr->next = prev;
            prev = curr;
            curr = stored;
        }
        // head = prev;
        return prev;
    }
};