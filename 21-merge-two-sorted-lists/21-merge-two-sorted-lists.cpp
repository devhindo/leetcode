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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>t;
        ListNode* q = list1;
        for(int i=0; i<=1; i++) {
            while(q) {
                t.push_back(q->val);
                q = q->next;
            }
            q = list2;
        }
        sort(t.begin(), t.end());
        ListNode* newhead = new ListNode();
        ListNode* itr = newhead;
        for(int i=0; i<t.size(); i++) {
            ListNode* n = new ListNode();
            n->val = t[i];
            itr->next = n;
            itr = n;
        }
        return newhead->next;
    }
};