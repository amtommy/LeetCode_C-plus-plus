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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;

        // get middle node and half lists
        ListNode* fast_head = head;
        ListNode* slow_head = head;
        while(fast_head->next != NULL && fast_head->next->next != NULL){
            fast_head = fast_head->next->next;
            slow_head = slow_head->next;                
        }
        // move to next node for even length
        if (fast_head->next != NULL) slow_head = slow_head->next;

        // reverse the second half list
        ListNode *prev = NULL, *curr = slow_head, *last = slow_head->next;
        while(last != NULL){
            curr->next = prev;
            prev = curr;
            curr = last;
            last = last->next;
        }
        curr->next = prev;
        prev = curr;

        // merge two lists
        ListNode *first = head, *second = prev, *tmp_first = NULL, *tmp_second = NULL;
        while (first != NULL && first != slow_head && second != NULL){
            tmp_first = first->next;
            tmp_second = second->next;
            first->next = second;
            second->next = tmp_first;
            first = tmp_first;
            second = tmp_second;
        }
        if (first != NULL) first->next = NULL;
    }
};