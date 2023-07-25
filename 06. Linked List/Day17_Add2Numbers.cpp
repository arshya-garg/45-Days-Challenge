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
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //reverse kardi
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        int sum;
        int carry = 0;
        int digit;
        while(l1 != NULL && l2 != NULL){
            int sum = l1->val + l2->val + carry;
            int digit = sum % 10;
            carry = sum/10;
            ListNode* newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
         while(l1 != NULL){
            sum = carry + l1->val;
            digit = sum % 10;
            carry = sum/10;
            ListNode* newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
            l1 = l1->next;
        }
         while(l2 != NULL){
            sum = carry + l2->val;
            digit = sum % 10;
            carry = sum/10;
            ListNode* newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
            l2 = l2->next;
        }
        while(carry != 0){
            sum = carry;
            digit = sum % 10;
            carry = sum/10;
            ListNode* newNode = new ListNode(digit);
            temp->next = newNode;
            // temp = temp->next;
        }
        return reverse(ans->next);
    }
};