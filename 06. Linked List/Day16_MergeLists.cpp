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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        else if(list2== NULL){
            return list1;
        }
        
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* head3 = new ListNode();
        ListNode* temp = head3;

        while(head1 != NULL && head2 != NULL){
            if(head1->val < head2->val){
                temp->next = head1;
                head1 = head1->next;
                
            }
            else{
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }

        while(head1 != NULL){
            temp->next = head1;
            head1 = head1->next;
            temp = temp->next;
        }
        while(head2 != NULL){
             temp->next = head2;
            head2 = head2->next;
            temp = temp->next;
        }
        return head3->next;
    }
   
};