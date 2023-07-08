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
        ListNode* head3 = NULL;

        while(head1 != NULL && head2 != NULL){
            if(head1->val < head2->val){
                head3->val = head1->val;
                head1 = head1->next;
            }
            else{
                head3 = head2;
                head2 = head2->next;
            }
            head3 = head3->next;
        }

        while(head1 != NULL){
            head3 = head1;
            head3 = head3->next;
            head1 = head1->next;
        }
        while(head2 != NULL){
            head3 = head2;
            head3 = head3->next;
            head2 = head2->next;
        }
        return head3;
    }
   
};