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
    int getLength(ListNode* head){
        ListNode* curr = head;
        int size = 0;
        while(curr != NULL){
            size ++;
            curr = curr->next;
        }
        return size;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        int count = 0;
        int len = getLength(head);

        ListNode* temp = head;
        int left = len - n ;
        if(left == 0){
            return head->next;
        }
        while(temp != NULL && count < len){
            if(count == left-1){
                if(temp->next != NULL)
                temp->next = temp->next->next;
                else temp->next = NULL;
            }
            else{
                temp = temp->next;}
                count ++;
        }
        return head;
    }
};