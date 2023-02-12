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
    void foo(ListNode* n1, ListNode* n2, int val) {
        if(!n2) return;
        if(n2->val == val) {
            n1->next = n2->next;
            foo(n1,n1->next,val);
            return;
        }
        foo(n1->next, n2->next, val);
    }
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val) head=head->next;
        if(!head) return head;
        foo(head, head->next,val);
        return head;
    }
};