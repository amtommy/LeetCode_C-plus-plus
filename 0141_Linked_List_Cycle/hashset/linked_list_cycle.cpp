#include<unordered_set>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s; //S: O(N), T: O(N)
        if (head == NULL || head->next == NULL) return false;
        s.insert(head);
        ListNode *current = head->next;
        while(current->next != NULL){ //T: O(N)
            current = current->next;
            if(s.find(current)!= s.end()) return true; // T:O(1)
            else{
                s.insert(current);
            }
        }
        return false;
    }
};