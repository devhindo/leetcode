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
    ListNode* middleNode(ListNode* head) {
        map<int,ListNode*>m;
        int i = 0;
        ListNode* q = head;
        while(q) {
            m[i] = q;
            q = q->next;
            i++;
        }
        int mid = m.rbegin()->first;
        return m[mid % 2 == 0 ? mid/2 : mid/2+1];
    }
};