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
    bool getLength(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        if(count %2==0){
            return true;
        }
        return false;
    }
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL || head==NULL){
            return head;
        }
        if(head->next->next == NULL){
            return head->next;
        }
        // ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(getLength(head)){
            return slow->next;
        }
        return slow;
    }
};