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
    void deleteNode(ListNode* node) {
        ListNode* q = node;
        while(q->next->next) {
            q->val = q->next->val;
            q = q->next;
        }
        q->val = q->next->val;
        q->next = NULL;
    }
};