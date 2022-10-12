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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* q1 = l1;
        ListNode* q2 = l2;
        int remainder = 0;
        int result;
        ListNode* newhead = new ListNode();
        ListNode* i = newhead;
        while(q1 || q2 || remainder) {
            result = 0;
            if(q1) {
                result += q1->val;
                q1 = q1->next;
            }
            if(q2) {
                result += q2->val;
                q2 = q2->next;
            }
            result += remainder;
            remainder = 0;
            if(result > 9) {
                remainder = result / 10;
                result = result % 10;
            }
            ListNode* n = new ListNode();
            n->val = result;
            i->next = n;
            i=n;
        }
        return newhead->next;
    }
};