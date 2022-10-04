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
        vector<int>v;
        ListNode *q = head;
        while(q) {
            v.push_back(q->val);
            q = q->next;
        }
        reverse(v.begin(),v.end());
        ListNode *newhead,*itr, *n;
        newhead = new ListNode();
        itr = newhead;
        for(int i=0; i<v.size(); i++) {
            n = new ListNode();
            n->val = v[i];
            itr->next = n;
            itr = n;
        }
        return newhead->next;
    }
};