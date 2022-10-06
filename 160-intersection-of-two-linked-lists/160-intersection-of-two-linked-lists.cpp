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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a =headA;
        ListNode* b = headB;
        unordered_map<ListNode*, int>m;
        while(a || b) {
            if(a) {
                if(++m[a] == 2) return a;
                a = a->next;
            }
            if(b) {
                if(++m[b] == 2) return b;
                b = b->next;
            }
        }
        return NULL;
    }
};