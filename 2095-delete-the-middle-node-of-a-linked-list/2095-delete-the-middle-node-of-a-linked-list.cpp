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
    ListNode* deleteMiddle(ListNode* head) {
        vector<int>v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        v.erase(begin(v)+v.size()/2);
        auto newhead = new ListNode();
        auto itr = newhead;
        for(int i=0; i<v.size(); i++) {
            auto n = new ListNode();
            n->val = v[i];
            itr->next = n;
            itr = n;
        }
        return newhead->next;
    }
};