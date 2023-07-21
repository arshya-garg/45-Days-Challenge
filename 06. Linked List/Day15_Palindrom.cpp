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
    private : 
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr != NULL){
            // prev = new ListNode(curr->val);
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* mid = getMid(head);
        ListNode* temprev = reverse(mid);
        ListNode* temp = head;

        while(temp != NULL && temprev != NULL){
            if(temp->val != temprev->val){
                return false;
            }
            else{
                temp = temp->next;
                temprev = temprev->next;}
        }
        return true;
    }
};