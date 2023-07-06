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
        ListNode* temp = head;
        int count=0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
public:
    int getDecimalValue(ListNode* head) {
        int n =getLength(head);
        int i =1;
        int num=0;
        ListNode* temp = head;
        while(temp != NULL){
            num = num + (temp->val)*pow(2,n-i);
            temp = temp->next;
            i++;
        }
        return num;
    }
};