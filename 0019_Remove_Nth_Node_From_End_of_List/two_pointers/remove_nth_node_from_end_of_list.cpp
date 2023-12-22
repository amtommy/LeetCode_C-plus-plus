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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL || n == 0) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        // Move fast ahead by n steps
        for(int i = 0; i < n; i++){ // T: O(N)
            fast = fast->next;
            if(fast == NULL) return head->next; // Remove head
        }
        // Move both pointers until fast reaches the end
        while(fast->next != NULL){ // T: O(N)
            slow = slow->next;
            fast = fast->next;
        }
        // Remove the target node
        slow->next = slow->next->next;
        return head;
    }
};