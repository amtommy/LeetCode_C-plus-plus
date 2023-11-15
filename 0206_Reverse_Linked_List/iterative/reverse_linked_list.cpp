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
        if(head == NULL || head->next == NULL) return head;
        ListNode* first = NULL;
        ListNode* current = head;
        ListNode* last = head->next;
        while(last != NULL){ // T:O(N)
            current->next = first;
            first = current; 
            current = last;;
            last = last->next;
        }
        current->next = first;
        return current;
    }
};