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
        set<ListNode*>s;
        ListNode *pt = head;
        bool isIn;
        while(pt) {
            isIn = s.find(pt) != s.end();
            if(isIn) {
                return true;
            } else {
                s.insert(pt);
                pt = pt->next;
            }
        }
        return false;
    }
};