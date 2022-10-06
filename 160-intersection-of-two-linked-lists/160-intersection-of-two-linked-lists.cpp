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
        unordered_set<ListNode*>m;
        while(a || b) {
            if(a) {
                if(m.find(a) != m.end()) return a;
                m.insert(a);
                a = a->next;
            }
            if(b) {
                if(m.find(b) != m.end()) return b;
                m.insert(b);
                b = b->next;
            }
        }
        return NULL;
    }
};